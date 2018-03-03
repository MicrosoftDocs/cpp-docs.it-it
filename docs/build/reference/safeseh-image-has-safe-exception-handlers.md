---
title: -SAFESEH (l'immagine ha gestori delle eccezioni sicuri) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /SAFESEH
dev_langs:
- C++
helpviewer_keywords:
- /SAFESEH linker option
- -SAFESEH linker option
- SAFESEH linker option
ms.assetid: 7722ff99-b833-4c65-a855-aaca902ffcb7
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1c57a882e3a421d03b2edf97c9fb4bf2f352e5d5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="safeseh-image-has-safe-exception-handlers"></a>/SAFESEH (L'immagine ha gestori delle eccezioni sicuri)
```  
/SAFESEH[:NO]  
```  
  
 Quando **/SAFESEH** viene specificato, il linker produrrà un'immagine solo se è possibile creare anche una tabella di gestori eccezioni sicuri dell'immagine. Questa tabella è specifica per il sistema operativo i gestori di eccezioni sono validi per l'immagine.  
  
 **/SAFESEH** è valido solo quando il collegamento per x86 destinazioni. **/SAFESEH** non è supportata per le piattaforme che dispongono già di gestori delle eccezioni. Ad esempio, in [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] e ARM, tutti i gestori di eccezioni sono indicati nella sezione PDATA. Ml64.exe è supportata l'aggiunta di annotazioni che generano informazioni SEH (XDATA e PDATA) nell'immagine, consentendo di funzioni ml64. Vedere [MASM per x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md) per ulteriori informazioni.  
  
 Se **/SAFESEH** non viene specificato, il linker produrrà un'immagine con una tabella di gestori eccezioni sicuri se tutti i moduli sono compatibili con la funzionalità di gestione delle eccezioni sicuri. Se tutti i moduli non sono compatibili con funzionalità di gestione sicura delle eccezioni, l'immagine risultante non conterrà una tabella di gestori eccezioni sicuri. Se [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) specifica WINDOWSCE o una delle opzioni EFI _ *, il linker non tenterà di ottenere un'immagine con una tabella di gestori eccezioni sicuri, poiché nessuno di tali sottosistemi può utilizzare le informazioni.  
  
 Se **/SAFESEH:NO** è specificato, il linker non produrrà un'immagine con una tabella di gestori eccezioni sicuri anche se tutti i moduli sono compatibili con la funzionalità di gestione sicura delle eccezioni.  
  
 La causa più comune per il linker non deve essere in grado di produrre un'immagine è perché uno o più file di input (moduli) per il linker non è compatibile con la funzionalità di gestori eccezioni sicuri. Un motivo comune per un modulo non sia compatibile con gestori eccezioni sicuri è perché è stato creato con un compilatore da una versione precedente di Visual C++.  
  
 È anche possibile registrare una funzione come gestore eccezioni strutturate utilizzando [. SAFESEH](../../assembler/masm/dot-safeseh.md).  
  
 Non è possibile contrassegnare un oggetto esistente binario con gestori eccezioni sicuri (o nessun gestore eccezioni); informazioni sulla gestione delle eccezioni sicuri devono essere aggiunti in fase di compilazione.  
  
 La capacità del linker per compilare una tabella di gestori eccezioni sicuri dipende dall'applicazione mediante la libreria di runtime C. Se si collega con [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) e si desidera che una tabella di gestori eccezioni sicuri, è necessario fornire una struttura di configurazione di caricamento (ad esempio può essere trovata nel file di origine CRT loadcfg. c) che contiene tutte le voci definite per Visual C++. Ad esempio:  
  
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
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **Linker** cartella.  
  
3.  Selezionare il **riga di comando** pagina delle proprietà.  
  
4.  Immettere l'opzione nel **opzioni aggiuntive** casella.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)