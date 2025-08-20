void kernel();

int j = 0;

int main()
{
  kernel();
  return 0;
}

void kernel()
{
  for (int i = 0; i < 10; ++i) {
    j += 1;
  }
}
