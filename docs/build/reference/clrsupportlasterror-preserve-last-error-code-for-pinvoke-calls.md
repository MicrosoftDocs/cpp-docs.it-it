---
title: /CLRSUPPORTLASTERROR (Mantiene l'ultimo codice di errore per le chiamate PInvoke)
ms.date: 11/04/2016
f1_keywords:
- /CLRSUPPORTLASTERROR
helpviewer_keywords:
- /CLRSUPPORTLASTERROR linker option
- -CLRSUPPORTLASTERROR linker option
ms.assetid: b7057990-4154-4b1d-9fc9-6236f7be7575
ms.openlocfilehash: 8be1ca08ae219202ad7b7f19ac693dd2123553b6
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57417736"
---
# <a name="clrsupportlasterror-preserve-last-error-code-for-pinvoke-calls"></a>/CLRSUPPORTLASTERROR (Mantiene l'ultimo codice di errore per le chiamate PInvoke)

**/CLRSUPPORTLASTERROR**, che è attivata per impostazione predefinita, mantiene l'ultimo codice di errore delle funzioni chiamata tramite il meccanismo P/Invoke, che consente di chiamare funzioni native in DLL da codice compilato con **/clr**.

## <a name="syntax"></a>Sintassi

```
/CLRSUPPORTLASTERROR{:NO | SYSTEMDLL}
```

## <a name="remarks"></a>Note

Mantenendo l'ultimo codice di errore implica una riduzione delle prestazioni.  Se non vuoi comportano l'impatto sulle prestazioni di salvaguardare l'ultimo codice di errore, il collegamento con **/CLRSUPPORTLASTERROR:NO**.

È possibile ridurre al minimo l'impatto sulle prestazioni mediante il collegamento al **/CLRSUPPORTLASTERROR:SYSTEMDLL**, che consente di mantenere solo l'ultimo codice di errore per le funzioni nelle DLL di sistema.  Una DLL di sistema è definito come uno dei seguenti:

|||||
|-|-|-|-|
|PER ACLUI. DLL|ACTIVEDS. DLL|ADPTIF. DLL|ADVAPI32.DLL|
|ASYCFILT.DLL|AUTHZ.DLL|AVICAP32.DLL|AVIFIL32.DLL|
|CABINET.DLL|CLUSAPI. DLL|COMCTL32.DLL|COMDLG32.DLL|
|COMSVCS.DLL|CREDUI. DLL|CRYPT32.DLL|CRYPTNET. DLL|
|CRYPTUI. DLL|D3D8THK. DLL|DBGENG. DLL|DBGHELP. DLL|
|DCIMAN32.DLL|DNSAPI.DLL|DSPROP.DLL|DSUIEXT.DLL|
|GDI32.DLL|GLU32.DLL|HLINK. DLL|ICM32.DLL|
|IMAGEHLP. DLL|IMM32.DLL|IPHLPAPI.DLL|IPROP.DLL|
|KERNEL32.DLL|KSUSER.DLL|LOADPERF. DLL|LZ32.DLL|
|MAPI32.DLL|MGMTAPI.DLL|MOBSYNC.DLL|MPR.DLL|
|MPRAPI.DLL|MQRT.DLL|MSACM32.DLL|MSCMS.DLL|
|MSI.DLL|MSIMG32.DLL|MSRATING.DLL|MSTASK.DLL|
|MSVFW32.DLL|MSWSOCK.DLL|MTXEX.DLL|NDDEAPI. DLL|
|NETAPI32.DLL|NPPTOOLS. DLL|NTDSAPI. DLL|NTDSBCLI.DLL|
|NTMSAPI. DLL|ODBC32.DLL|ODBCBCP.DLL|OLE32.DLL|
|OLEACC. DLL|OLEAUT32. DLL|OLEDLG.DLL|OPENGL32. DLL|
|PDH.DLL|POWRPROF.DLL|QOSNAME.DLL|ESEGUIRE UNA QUERY. DLL|
|RASAPI32.DLL|RASDLG.DLL|RASSAPI. DLL|RESUTILS. DLL|
|RICHED20. DLL|RPCNS4.DLL|RPCRT4.DLL|RTM.DLL|
|RTUTILS. DLL|SCARDDLG. DLL|SECUR32.DLL|SENSAPI. DLL|
|SETUPAPI. DLL|SFC.DLL|SHELL32. DLL|SHFOLDER. DLL|
|SHLWAPI.DLL|SISBKUP. DLL|SNMPAPI. DLL|SRCLIENT.DLL|
|STI. DLL|TAPI32.DLL|TRAFFICO. DLL|URL.DLL|
|URLMON.DLL|USER32.DLL|USERENV. DLL|USP10.DLL|
|UXTHEME. DLL|VDMDBG.DLL|VERSION.DLL|WINFAX. DLL|
|WINHTTP. DLL|WININET. DLL|ASSEMBLY WINMM. DLL|WINSCARD. DLL|
|WINTRUST. DLL|WLDAP32.DLL|WOW32.DLL|WS2_32.DLL|
|WSNMP32.DLL|WSOCK32.DLL|WTSAPI32.DLL|XOLEHLP.DLL|

> [!NOTE]
>  Mantenendo l'ultimo errore non è supportata per le funzioni non gestite utilizzate dal codice CLR, nello stesso modulo.

- Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione nel **opzioni aggiuntive** casella.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="example"></a>Esempio

L'esempio seguente definisce una DLL nativa con una funzione esportata che modifica l'ultimo errore.

```
// CLRSUPPORTLASTERROR_dll.cpp
// compile with: /LD
#include <windows.h>
#include <math.h>

#pragma unmanaged
__declspec(dllexport) double MySqrt(__int64 n) {
   SetLastError(DWORD(-1));
   return sqrt(double(n));
}
```

## <a name="example"></a>Esempio

L'esempio seguente utilizza il file DLL, che illustra come usare **/CLRSUPPORTLASTERROR**.

```
// CLRSUPPORTLASTERROR_client.cpp
// compile with: /clr CLRSUPPORTLASTERROR_dll.lib /link /clrsupportlasterror:systemdll
// processor: x86
#include <windows.h>
#include <wininet.h>
#include <stdio.h>
#include <math.h>

#pragma comment(lib, "wininet.lib")

double MySqrt(__int64 n);

#pragma managed
int main() {
   double   d = 0.0;
   __int64 n = 65;
   HANDLE  hGroup = NULL;
   GROUPID groupID;
   DWORD   dwSet = 127, dwGet = 37;

   SetLastError(dwSet);
   d = MySqrt(n);
   dwGet = GetLastError();

   if (dwGet == DWORD(-1))
      printf_s("GetLastError for application call succeeded (%d).\n",
             dwGet);
   else
      printf_s("GetLastError for application call failed (%d).\n",
             dwGet);

   hGroup = FindFirstUrlCacheGroup(0, CACHEGROUP_SEARCH_ALL,
                           0, 0, &groupID, 0);
   dwGet = GetLastError();
   if (dwGet == 183)
      printf_s("GetLastError for system call succeeded (%d).\n",
             dwGet);
   else
      printf_s("GetLastError for system call failed (%d).\n",
             dwGet);
}
```

```Output
GetLastError for application call failed (127).
GetLastError for system call succeeded (183).
```

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
