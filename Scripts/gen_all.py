from gen_errno import gen_errno
from gen_hresult import gen_hresult
from gen_http import gen_http
from gen_ipp_status import gen_ipp_status
from gen_kreturn import gen_kreturn
from gen_lresult import gen_lresult
from gen_ntstatus import gen_ntstatus


def main():
    gen_errno()
    gen_hresult()
    gen_http()
    gen_ipp_status()
    gen_kreturn()
    gen_lresult()
    gen_ntstatus()


if __name__ == "__main__":
    main()

