---
title: -CLRIMAGETYPE (specifica il tipo di immagine CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /CLRIMAGETYPE
- VC.Project.VCLinkerTool.CLRImageType
dev_langs: C++
helpviewer_keywords:
- /CLRIMAGETYPE linker option
- -CLRIMAGETYPE linker option
ms.assetid: 04c60ee6-9dd7-4391-bc03-6926ad0fa116
caps.latest.revision: "14"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b7d8edd6c9e62456e54ac6228f25d7f923a6813c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="clrimagetype-specify-type-of-clr-image"></a>/CLRIMAGETYPE (Specifica il tipo di immagine CLR)
```  
/CLRIMAGETYPE:{IJW|PURE|SAFE|SAFE32BITPREFERRED}  
```  
  
## <a name="remarks"></a>Note  
 Il linker accetta gli oggetti nativi e anche gli oggetti MSIL compilati utilizzando [/clr](../../build/reference/clr-common-language-runtime-compilation.md), /clr: pure o /CLR: safe. Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015. Quando si passano oggetti misti nella stessa compilazione, il livello di verificabilità del file di output risultante corrisponde, per impostazione predefinita, a quello più basso dei moduli di input. Se ad esempio si passa sia un modulo safe che un modulo pure al linker, il file di output sarà pure. Se si passa un'immagine nativa e un'immagine a modalità mista (compilati usando **/clr**), l'immagine risulta sarà un'immagine a modalità mista.  
  
 Si può utilizzare /CLRIMAGETYPE per specificare un livello di verificabilità più basso, se necessario.  
  
 In .NET 4.5, /CLRIMAGETYPE supporta un'opzione SAFE32BITPREFERRED. In questo modo viene impostato, nell'intestazione PE dell'immagine, un flag indicante che gli oggetti MSIL sono safe e possono essere eseguiti in tutte le piattaforme, anche se si preferiscono gli ambienti di esecuzione a 32 bit. Questa opzione consente ad un'applicazione di essere eseguita su piattaforme ARM e inoltre specifica che deve essere eseguita in WOW64 nei sistemi operativi a 64 bit anziché utilizzare l'ambiente di esecuzione a 64 bit.  
  
 Quando un file .exe è stato compilato utilizzando **/clr** o **/clr: pure** viene eseguito in un sistema operativo a 64 bit, l'applicazione viene eseguita in WOW64, che consente a un'applicazione a 32 bit per l'esecuzione in un sistema operativo a 64 bit. Per impostazione predefinita, un .exe che viene compilato mediante **/CLR: safe** viene eseguito con supporto del sistema operativo a 64 bit. Tuttavia, è possibile che l'applicazione safe viene caricato un componente a 32 bit. In tal caso, un'immagine safe in esecuzione con supporto del sistema operativo a 64 bit avrà esito negativo durante il caricamento dell'applicazione a 32 bit. Per assicurare che un'immagine safe continui l'esecuzione durante il caricamento di un componente a 32 bit su un sistema operativo a 64 bit, utilizzare l'opzione /CLRIMAGETYPE:SAFE32BITPREFERRED. Se il codice non deve essere eseguito su piattaforme ARM, è possibile specificare l'opzione /CLRIMAGETYPE:PURE per modificare i metadati (estensione corflags), contrassegnandoli per l'esecuzione in WOW64 e sostituendo il simbolo di ingresso:  
  
 **cl /clr:safe t.cpp /link /clrimagetype:pure /entry:?main@@$$HYMHXZ /subsystem:console**  
  
 Per altre informazioni su come determinare il tipo di immagine CLR di un file, vedere [/CLRHEADER](../../build/reference/clrheader.md).  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione** nodo.  
  
3.  Espandere il **Linker** nodo.  
  
4.  Selezionare il **avanzate** pagina delle proprietà.  
  
5.  Modificare il **tipo di immagine CLR** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.CLRImageType%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)