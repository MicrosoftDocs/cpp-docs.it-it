---
title: -CLRSUPPORTLASTERROR (conserva ultimo codice di errore per le chiamate PInvoke) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /CLRSUPPORTLASTERROR
dev_langs: C++
helpviewer_keywords:
- /CLRSUPPORTLASTERROR linker option
- -CLRSUPPORTLASTERROR linker option
ms.assetid: b7057990-4154-4b1d-9fc9-6236f7be7575
caps.latest.revision: "16"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e082637e25832c5c5036910f7b67aff53d867bdb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="clrsupportlasterror-preserve-last-error-code-for-pinvoke-calls"></a>/CLRSUPPORTLASTERROR (Mantiene l'ultimo codice di errore per le chiamate PInvoke)
**/CLRSUPPORTLASTERROR**, che è attivata per impostazione predefinita, mantiene l'ultimo codice di errore delle funzioni chiamata mediante il meccanismo P/Invoke, che consente di chiamare funzioni native in DLL da codice compilato con **/clr**.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/CLRSUPPORTLASTERROR{:NO | SYSTEMDLL}  
```  
  
## <a name="remarks"></a>Note  
 Mantenere l'ultimo codice di errore implica una riduzione delle prestazioni.  Se si preferisce non comportano un impatto sulle prestazioni di preservare l'ultimo codice di errore, il collegamento con **/CLRSUPPORTLASTERROR:NO**.  
  
 È possibile ridurre al minimo l'impatto sulle prestazioni tramite il collegamento con **/CLRSUPPORTLASTERROR:SYSTEMDLL**, che consente di mantenere solo l'ultimo codice di errore per le funzioni nelle DLL di sistema.  Una DLL di sistema è definito come uno dei valori seguenti:  
  
|||||  
|-|-|-|-|  
|PER ACLUI. DLL|ACTIVEDS. DLL|ADPTIF. DLL|ADVAPI32. DLL|  
|ASYCFILT. DLL|AUTENTICAZIONE. DLL|AVICAP32. DLL|AVIFIL32. DLL|  
|FILE CAB. DLL|CLUSAPI. DLL|COMCTL32. DLL|FILE COMDLG32. DLL|  
|THREAD COMSVCS. DLL|CREDUI. DLL|CRYPT32. DLL|CRYPTNET. DLL|  
|CRYPTUI. DLL|D3D8THK. DLL|DBGENG. DLL|DBGHELP. DLL|  
|DCIMAN32. DLL|DNSAPI. DLL|DSPROP. DLL|DSUIEXT. DLL|  
|GDI32. DLL|GLU32. DLL|HLINK. DLL|ICM32. DLL|  
|IMAGEHLP. DLL|IMM32. DLL|IPHLPAPI. DLL|IPROP. DLL|  
|KERNEL32. DLL|KSUSER. DLL|LOADPERF. DLL|LZ32. DLL|  
|MAPI32. DLL|MGMTAPI. DLL|MOBSYNC. DLL|MPR. DLL|  
|MPRAPI. DLL|MQRT. DLL|MSACM32. DLL|MSCMS. DLL|  
|FILE MSI. DLL|MSIMG32. DLL|MSRATING. DLL|MSTASK. DLL|  
|MSVFW32. DLL|MSWSOCK. DLL|FILE MTXEX. DLL|NDDEAPI. DLL|  
|NETAPI32. DLL|NPPTOOLS. DLL|NTDSAPI. DLL|NTDSBCLI. DLL|  
|NTMSAPI. DLL|ODBC32. DLL|AI FILE ODBCBCP. DLL|OLE32. DLL|  
|OLEACC. DLL|OLEAUT32. DLL|OLEDLG. DLL|OPENGL32. DLL|  
|PDH. DLL|POWRPROF. DLL|QOSNAME. DLL|ESEGUIRE UNA QUERY. DLL|  
|RASAPI32. DLL|RASDLG. DLL|RASSAPI. DLL|RESUTILS. DLL|  
|RICHED20. DLL|RPCNS4. DLL|RPCRT4. DLL|RTM. DLL|  
|RTUTILS. DLL|SCARDDLG. DLL|SECUR32. DLL|SENSAPI. DLL|  
|SETUPAPI. DLL|SFC. DLL|SHELL32. DLL|SHFOLDER. DLL|  
|CORREZIONE. DLL|SISBKUP. DLL|SNMPAPI. DLL|SRCLIENT. DLL|  
|STI. DLL|TAPI32. DLL|TRAFFICO. DLL|URL. DLL|  
|URLMON. DLL|USER32. DLL|USERENV. DLL|USP10. DLL|  
|UXTHEME. DLL|VDMDBG. DLL|VERSIONE. DLL|WINFAX. DLL|  
|WINHTTP. DLL|WININET. DLL|ASSEMBLY WINMM. DLL|WINSCARD. DLL|  
|WINTRUST. DLL|WLDAP32. DLL|WOW32. DLL|WS2_32.DLL|  
|WSNMP32. DLL|WSOCK32.DLL|WTSAPI32. DLL|XOLEHLP. DLL|  
  
> [!NOTE]
>  Mantenere l'ultimo errore non è supportata per le funzioni non gestite che vengono utilizzate da codice CLR, nello stesso modulo.  
  
-   Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione nel **opzioni aggiuntive** casella.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
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
 L'esempio seguente utilizza la DLL, che illustra l'utilizzo **/CLRSUPPORTLASTERROR**.  
  
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
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)