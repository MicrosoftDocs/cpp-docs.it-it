---
title: "/SAFESEH (L&#39;immagine ha gestori delle eccezioni sicuri) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/SAFESEH"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/SAFESEH (opzione del linker)"
  - "-SAFESEH (opzione del linker)"
  - "SAFESEH (opzione del linker)"
ms.assetid: 7722ff99-b833-4c65-a855-aaca902ffcb7
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# /SAFESEH (L&#39;immagine ha gestori delle eccezioni sicuri)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/SAFESEH[:NO]  
```  
  
 Quando si specifica **\/SAFESEH**, il linker genera un'immagine solo se è in grado di creare anche una tabella di gestori delle eccezioni sicuri di tale immagine.  La tabella specifica al sistema operativo i gestori eccezioni validi per l'immagine.  
  
 **\/SAFESEH** è valida solo quando si esegue il collegamento per piattaforme x86.  **\/SAFESEH** non è supportata per piattaforme che dispongono già di gestori eccezioni.  Ad esempio, in [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] e ARM, tutti i gestori di eccezioni sono indicati nella sezione PDATA.  ML64.exe dispone del supporto per l'aggiunta di annotazioni che generano informazioni SEH \(XDATA e PDATA\) all'interno dell'immagine e consente quindi di rimuovere le funzioni ml64.  Per ulteriori informazioni, vedere [MASM for x64 \(ml64.exe\)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
 Se non si specifica **\/SAFESEH**, il linker genererà un'immagine con una tabella di gestori delle eccezioni sicuri se tutti i moduli sono compatibili con la funzionalità di gestione sicura delle eccezioni.  Se sono presenti moduli non compatibili con tale funzionalità, l'immagine risultante non conterrà una tabella di gestori eccezioni sicuri.  Se [\/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) specifica WINDOWSCE o una delle opzioni EFI\_\*, il linker non tenterà di generare un'immagine con una tabella di gestori eccezioni sicuri, poiché nessuno di tali sottosistemi può utilizzarne le informazioni.  
  
 Se si specifica **\/SAFESEH:NO**, il linker non genererà un'immagine con una tabella di gestori delle eccezioni sicuri, anche se tutti i moduli sono compatibili con la funzionalità di gestione sicura delle eccezioni.  
  
 Di norma, il motivo per cui il linker non è in grado di generare un'immagine è dato dal fatto che uno o più file di input \(moduli\) nel linker non sono compatibili con la funzionalità dei gestori eccezioni sicuri,  in genere a causa del fatto che tale moduli sono stati creati con un compilatore di una versione precedente di Visual C\+\+.  
  
 È possibile registrare una funzione come gestore eccezioni strutturate utilizzando [.SAFESEH](../../assembler/masm/dot-safeseh.md).  
  
 Non è possibile contrassegnare un file binario esistente come contenente gestori eccezioni sicuri \(o nessun gestore eccezioni\) perché le informazioni sulla gestione sicura delle eccezioni devono essere aggiunte in fase di compilazione.  
  
 La capacità del linker di compilare una tabella di gestori eccezioni sicuri dipende dall'applicazione che utilizza la libreria di runtime del linguaggio C.  Se si effettua il collegamento con [\/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) e si desidera generare una tabella di gestori eccezioni sicuri, è necessario fornire una struttura di configurazione di caricamento, come quella che si trova nel file di origine CRT loadcfg.c, che contenga tutte le voci definite per Visual C\+\+.  Di seguito è riportato un esempio.  
  
```  
#include <windows.h>  
extern DWORD_PTR __security_cookie;  /* /GS security cookie */  
  
/*  
 * The following two names are automatically created by the linker for any  
 * image that has the safe exception table present.  
*/  
  
extern PVOID __safe_se_handler_table[]; /* base of safe handler entry table */  
extern BYTE  __safe_se_handler_count;  /* absolute symbol whose address is  
                                           the count of table entries */  
typedef struct {  
    DWORD       Size;  
    DWORD       TimeDateStamp;  
    WORD        MajorVersion;  
    WORD        MinorVersion;  
    DWORD       GlobalFlagsClear;  
    DWORD       GlobalFlagsSet;  
    DWORD       CriticalSectionDefaultTimeout;  
    DWORD       DeCommitFreeBlockThreshold;  
    DWORD       DeCommitTotalFreeThreshold;  
    DWORD       LockPrefixTable;            // VA  
    DWORD       MaximumAllocationSize;  
    DWORD       VirtualMemoryThreshold;  
    DWORD       ProcessHeapFlags;  
    DWORD       ProcessAffinityMask;  
    WORD        CSDVersion;  
    WORD        Reserved1;  
    DWORD       EditList;                   // VA  
    DWORD_PTR   *SecurityCookie;  
    PVOID       *SEHandlerTable;  
    DWORD       SEHandlerCount;  
} IMAGE_LOAD_CONFIG_DIRECTORY32_2;  
  
const IMAGE_LOAD_CONFIG_DIRECTORY32_2 _load_config_used = {  
    sizeof(IMAGE_LOAD_CONFIG_DIRECTORY32_2),  
    0,  
    0,  
    0,  
    0,  
    0,  
    0,  
    0,  
    0,  
    0,  
    0,  
    0,  
    0,  
    0,  
    0,  
    0,  
    0,  
    &__security_cookie,  
    __safe_se_handler_table,  
    (DWORD)(DWORD_PTR) &__safe_se_handler_count  
};  
```  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
4.  Inserire l'opzione nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)