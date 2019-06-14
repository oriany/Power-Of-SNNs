# Power-Of-SNNs
Embedded systems have constrained power and memory resources, therefore full-precision deep neural networks are not easily deployable on these devices. Binarized Neural Networks (BNN) and Spiking Neural Networks (SNN) have low computational costs which makes them amenable for embedded devices that are computationally constrained.  In BNNs both activations and weights are only one bit wide which bring about bitwise XOR and population count operations, instead of multiply-accumulate. On the other hand, SNNs are event based. Specifically, their computation is based on the arrival of on-off events through time.  In this project, we aim to compare these two different light-weighted computational models of neural networks in terms of consumed power and inference accuracy.

# Short Summary
Recently, neural network models have become prevalent in edge devices for diverse applications such as object detection, computer vision, image processing , etc. In order to make neural networks faster and more power efficient for embedded devices, new neural network computation models such as Binary Neural Networks (BNNs) and Spiking Neural Networks (SNNs) have been introduced. BNN is a model in which the precision of all the parameters are lowered to just one bit. Therefore, the operations can be reduced to logical gate operations such as exclusive or (xor). On the other hand, SNNs are event based. More specifically, their computation is based on arrival of on and off events throughout the computation time. We aim to compare these two different light-weighted network models in terms of latency, consumed power and inference accuracy. We compared their execution time and accuracy for the MNIST dataset using software on an Intel Corei7 CPU. We also compared the execution time of a Binarized Neural Network on a Xilinx PYNQ-Z2 board using a software implementation and a hardware one. We then implemented our neuron engine on the PYNQ board.

As future work, we want to extend our hardware implementation from a single neuron engine to synapse and offer energy comparisons as well. 

# Code
 To reproduce the results, you can run the Python script. It has instructions.

# Results
summary of our results. The SNN execution time on software (the one on Intel Corei7) is highest, since it was produced through 30 timesteps, which is 30 runs of the network. Although the execution time is high, the error is the lowest. 


On software the CNN is faster than BNN, since Intel's CPU architecture is not compatible with bit operations, so it cannot exploit the speedup opportunity that BNNs bring about. The reason that it is not even the same, but worse, is that time is pent to quantize and the quantize numbers for this network. 


The two final results which are for the PYNQ board, the first one is when the light-weightedness of BNNs is exploited through hardware, and the second is when the BNN is run using the software, in a general purpose way. 


![Image of results]
(https://github.com/oriany/Power-Of-SNNs/blob/master/pictures/res.png)

