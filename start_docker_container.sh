working_dir='/studiob/roterB'

docker run \
   --name roterB-juce-dev \
   --mount type=bind,source=${PWD},target=$working_dir \
   --workdir $working_dir \
   -it \
   roter_b-dev

