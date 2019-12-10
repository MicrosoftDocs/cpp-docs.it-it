---
title: /CLRSUPPORTLASTERROR (Mantiene l'ultimo codice di errore per le chiamate PInvoke)
ms.date: 11/04/2016
f1_keywords:
- /CLRSUPPORTLASTERROR
helpviewer_keywords:
- /CLRSUPPORTLASTERROR linker option
- -CLRSUPPORTLASTERROR linker option
ms.assetid: b7057990-4154-4b1d-9fc9-6236f7be7575
ms.openlocfilehash: 64948d81759d415245e741bc6152d56bb35480d2
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988347"
---
# <a name="clrsupportlasterror-preserve-last-error-code-for-pinvoke-calls"></a>/CLRSUPPORTLASTERROR (Mantiene l'ultimo codice di errore per le chiamate PInvoke)

**/CLRSUPPORTLASTERROR**, che è attiva per impostazione predefinita, conserva l'ultimo codice di errore delle funzioni chiamate tramite il meccanismo P/Invoke, che consente di chiamare funzioni native in dll, dal codice compilato con **/CLR**.

## <a name="syntax"></a>Sintassi

```
/CLRSUPPORTLASTERROR{:NO | SYSTEMDLL}
```

## <a name="remarks"></a>Note

La conservazione dell'ultimo codice di errore implica una riduzione delle prestazioni.  Se non si vuole influire negativamente sulle prestazioni della conservazione dell'ultimo codice di errore, collegare con **/CLRSUPPORTLASTERROR: No**.

È possibile ridurre al minimo l'effetto sulle prestazioni tramite il collegamento a **/CLRSUPPORTLASTERROR: SYSTEMDLL**, che conserva solo l'ultimo codice di errore per le funzioni nelle DLL di sistema.  Una DLL di sistema è definita in uno dei seguenti elementi:

|||||
|-|-|-|-|
|ACLUI. DLL|ACTIVEDS. DLL|ADPTIF. DLL|ADVAPI32.DLL|
|ASYCFILT.DLL|AUTHZ. DLL|AVICAP32. DLL|AVIFIL32. DLL|
|CAB. DLL|CLUSAPI. DLL|Comctl32. DLL|Comdlg32. DLL|
|Comsvcs. DLL|CREDUI. DLL|Crypt32. DLL|CRYPTNET. DLL|
|CRYPTUI. DLL|D3D8THK. DLL|DBGENG. DLL|DBGHELP. DLL|
|DCIMAN32.DLL|DNSAPI. DLL|DSPROP. DLL|DSUIEXT. DLL|
|GDI32.DLL|GLU32.DLL|Hlink. DLL|ICM32.DLL|
|Imagehlp. DLL|IMM32.DLL|IPHLPAPI. DLL|IPROP. DLL|
|KERNEL32.DLL|KSUSER. DLL|LOADPERF. DLL|LZ32.DLL|
|Mapi32. DLL|MGMTAPI. DLL|MOBSYNC.DLL|MPR.DLL|
|MPRAPI. DLL|MQRT.DLL|MSACM32.DLL|MSCMS.DLL|
|FILE MSI. DLL|MSIMG32.DLL|MSRATING. DLL|MSTASK. DLL|
|MSVFW32.DLL|MSWSOCK. DLL|MTXEX.DLL|NDDEAPI. DLL|
|NETAPI32.DLL|NPPTOOLS. DLL|NTDSAPI. DLL|NTDSBCLI.DLL|
|NTMSAPI. DLL|ODBC32.DLL|ODBCBCP.DLL|OLE32. DLL|
|OLEACC. DLL|OLEAUT32. DLL|OLEDLG. DLL|Opengl32. DLL|
|PDH. DLL|POWRPROF.DLL|QOSNAME. DLL|QUERY. DLL|
|RASAPI32.DLL|RASDLG. DLL|RASSAPI. DLL|RESUTILS. DLL|
|Riched20. DLL|RPCNS4.DLL|RPCRT4. DLL|RTM. DLL|
|RTUTILS. DLL|SCARDDLG. DLL|SECUR32. DLL|SENSAPI. DLL|
|SETUPAPI. DLL|SFC. DLL|SHELL32. DLL|SHFOLDER. DLL|
|SHLWAPI.DLL|SISBKUP. DLL|SNMPAPI. DLL|SRCLIENT. DLL|
|STI. DLL|Tapi32. DLL|Traffico. DLL|URL. DLL|
|URLMON. DLL|USER32.DLL|USERENV. DLL|USP10.DLL|
|UXTHEME. DLL|VDMDBG.DLL|VERSIONE. DLL|WinFax. DLL|
|WinHTTP. DLL|WinInet. DLL|WINMM. DLL|WINSCARD. DLL|
|WINTRUST. DLL|WLDAP32.DLL|Wow32. DLL|WS2_32.DLL|
|WSNMP32.DLL|WSOCK32.DLL|WTSAPI32.DLL|XOLEHLP. DLL|

> [!NOTE]
>  La conservazione dell'ultimo errore non è supportata per le funzioni non gestite utilizzate dal codice CLR nello stesso modulo.

- Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](clr-common-language-runtime-compilation.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="example"></a>Esempio

Nell'esempio seguente viene definita una DLL nativa con una funzione esportata che modifica l'ultimo errore.

```cpp
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

Nell'esempio seguente viene utilizzata la DLL, che illustra come utilizzare **/CLRSUPPORTLASTERROR**.

```cpp
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

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
