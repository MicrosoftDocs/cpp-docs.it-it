---
title: /CLRSUPPORTLASTERROR (Mantiene l'ultimo codice di errore per le chiamate PInvoke)
ms.date: 11/04/2016
f1_keywords:
- /CLRSUPPORTLASTERROR
helpviewer_keywords:
- /CLRSUPPORTLASTERROR linker option
- -CLRSUPPORTLASTERROR linker option
ms.assetid: b7057990-4154-4b1d-9fc9-6236f7be7575
ms.openlocfilehash: 19930591c2d0406c68b1a408622a49c9e8b1d551
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81322270"
---
# <a name="clrsupportlasterror-preserve-last-error-code-for-pinvoke-calls"></a>/CLRSUPPORTLASTERROR (Mantiene l'ultimo codice di errore per le chiamate PInvoke)

**/CLRSUPPORTLASTERROR**, che è attivata per impostazione predefinita, mantiene l'ultimo codice di errore delle funzioni chiamate tramite il meccanismo P/Invoke, che consente di chiamare funzioni native nelle DLL, dal codice compilato con **/clr**.

## <a name="syntax"></a>Sintassi

```
/CLRSUPPORTLASTERROR{:NO | SYSTEMDLL}
```

## <a name="remarks"></a>Osservazioni

Mantenere l'ultimo codice di errore implica una diminuzione delle prestazioni.  Se non si desidera incorrere nell'impatto sulle prestazioni del mantenimento dell'ultimo codice di errore, creare un collegamento con **/CLRSUPPORTLASTERROR:NO**.

È possibile ridurre al minimo l'impatto sulle prestazioni mediante il collegamento con **/CLRSUPPORTLASTERROR:SYSTEMDLL**, che mantiene solo l'ultimo codice di errore per le funzioni nelle DLL di sistema.  Una DLL di sistema è definita come una delle seguenti:

|||||
|-|-|-|-|
|ACLUI. DLL (DLL)|ACTIVEDS. DLL|ADPTIF. DLL (DLL)|ADVAPI32. DLL|
|ASYCFILT. DLL (DLL)|L'al-A0>. DLL (DLL)|AVICAP32. DLL (DLL)|AVIFIL32. DLL (DLL)|
|armadietto. DLL (DLL)|L'APICLUS. DLL (DLL)|COMCTL32. DLL (DLL)|COMDLG32. DLL (DLL)|
|ComSVCS. DLL (DLL)|(A. di CONTROLLO la pagina del controllo DELLA rete non è così DLL (DLL)|CRYPT32. DLL (DLL)|CRYPTNET. DLL (DLL)|
|CRYPTUI. DLL (DLL)|D3D8THK. DLL (DLL)|DBGENG. DLL (DLL)|DBGHELP. DLL (DLL)|
|DCIMAN32. DLL (DLL)|Dislofattore DNSAPI. DLL (DLL)|DSPROP. DLL (DLL)|DSUIEXT. DLL (DLL)|
|GDI32. DLL (DLL)|GLU32. DLL (DLL)|Hlink. DLL (DLL)|ICM32. DLL (DLL)|
|IMMAGINEHLP. DLL (DLL)|IMM32. DLL (DLL)|IPHLPAPI. DLL|IPROP. DLL (DLL)|
|KERNEL32. DLL|KSUSER. DLL (DLL)|DiSP. DLL (DLL)|L-32. DLL (DLL)|
|NELLA seconda guerra mondiale. DLL (DLL)|DI MGMTAPI. DLL (DLL)|MOBSYNC. DLL (DLL)|MPR. DLL|
|L'MPRAPI. DLL (DLL)|Mqrt. DLL (DLL)|FUNZIONE MSACM32. DLL (DLL)|Mscms. DLL (DLL)|
|FILE MSI. DLL|MSIMG32. DLL (DLL)|LA SIGNORA. DLL (DLL)|MSTask. DLL (DLL)|
|MSVFW32. DLL (DLL)|Il file MSWSOCK. DLL (DLL)|MTXEX. DLL (DLL)|NDDEAPI. DLL (DLL)|
|NETAPI32. DLL|Funzione NPPTOOLS. DLL (DLL)|NTDSAPI. DLL (DLL)|NTDSBCLI. DLL (DLL)|
|NTMSAPI. DLL (DLL)|ODBC32. DLL (DLL)|Odbcbcp. DLL (DLL)|OLE32. DLL|
|OLEACC. DLL (DLL)|OLEAUT32. DLL|OLEDLG. DLL (DLL)|OPENGL32. DLL (DLL)|
|Pdh. DLL (DLL)|POWRPROF. DLL|QOSNAME. DLL (DLL)|Query. DLL (DLL)|
|RASAPI32. DLL (DLL)|Il file RASDLG. DLL (DLL)|RADSAPI. DLL (DLL)|RESUTILS. DLL (DLL)|
|RICHED20. DLL (DLL)|RPCNS4. DLL (DLL)|RPCRT4. DLL|Rtm. DLL (DLL)|
|Funzione RTUTILS. DLL (DLL)|SCARDDLG. DLL (DLL)|SECUR32. DLL|SENSAPI. DLL (DLL)|
|SETUPAPI. DLL|Sfc. DLL (DLL)|SHELL32. DLL|Shfolder. DLL (DLL)|
|CORREZIONE. DLL|SISBKUP. DLL (DLL)|SNMPAPI. DLL (DLL)|SRCLIENT. DLL (DLL)|
|Sti. DLL (DLL)|TAPI32. DLL (DLL)|Traffico. DLL (DLL)|Url. DLL (DLL)|
|Urlmon. DLL (DLL)|USER32. DLL|USERENV. DLL|USP10. DLL (DLL)|
|Uxtheme. DLL (DLL)|VDMDBG. DLL (DLL)|VERSIONE. DLL|Winfax. DLL (DLL)|
|WINHTTP. DLL (DLL)|Wininet. DLL (DLL)|WINMM. DLL (DLL)|WINSCARD. DLL (DLL)|
|WINTRUST. DLL (DLL)|WLDAP32. DLL|WOW32. DLL (DLL)|WS2_32|
|Funzione WSNMP32. DLL (DLL)|WSOCK32.DLL|WTSAPI32. DLL|XOLEHLP. DLL (DLL)|

> [!NOTE]
> La conservazione dell'ultimo errore non è supportata per le funzioni non gestite utilizzate dal codice CLR, nello stesso modulo.

- Per ulteriori informazioni, vedere [/clr (Compilazione Common Language Runtime)](clr-common-language-runtime-compilation.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione nella casella **Opzioni aggiuntive.**

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

Nell'esempio riportato di seguito viene utilizzata la DLL, dimostrando come utilizzare **/CLRSUPPORTLASTERROR**.

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
