public class RandSim {
        public static void main(String[] args) {
          int rl = Integer.parseInt(args[0]);
          double td = Double.parseDouble(args[1]);
          double theta = Double.parseDouble(args[2]);
          String genome = args[3];
          String out_stem = args[4];

          System.out.format("read length: %d\n", rl);
          System.out.format("target depth: %f\n", td);
          System.out.format("theta : %f\n", theta);
          System.out.format("genome : %s\n", genome);
          System.out.format("out_stem : %s\n", out_stem);
        }
}