---
title: -MANIFEST (Crea manifesto dell'Assembly Side-by-Side) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: VC.Project.VCLinkerTool.GenerateManifest
dev_langs: C++
helpviewer_keywords:
- -MANIFEST linker option
- /MANIFEST linker option
- MANIFEST linker option
ms.assetid: 98c52e1e-712c-4f49-b149-4d0a3501b600
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: bb26957109a558b48d6252e042e9082f7357fbd7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="manifest-create-side-by-side-assembly-manifest"></a>/MANIFEST (Crea manifesto dell'assembly syde-by-side)
```  
/MANIFEST[:{EMBED[,ID=#]|NO}]  
```  
  
## <a name="remarks"></a>Note  
 /MANIFEST specifica che il linker deve creare un file manifesto side-by-side. Per ulteriori informazioni sui file manifesti, vedere [Manifest Files Reference](http://msdn.microsoft.com/library/aa375632).  
  
 Il valore predefinito è /MANIFEST.  
  
 L'opzione /MANIFEST:EMBED specifica che il linker deve includere il file manifesto nell'immagine come risorsa di tipo RT_MANIFEST. Il parametro facoltativo `ID` è l'ID della risorsa da utilizzare per il manifesto. Utilizzare un valore 1 per un file eseguibile. Utilizzare un valore 2 per una dll per permettergli di specificare le dipendenze private. Se il parametro `ID` non viene specificato, il valore predefinito è 2 se l'opzione /DLL è impostata; altrimenti il valore predefinito è 1.  
  
 A partire da Visual Studio 2008, i file manifesto per gli eseguibili contengono una sezione che specifica le informazioni di controllo Account utente (UAC). Se si specifica /MANIFEST ma si specifica né [/MANIFESTUAC](../../build/reference/manifestuac-embeds-uac-information-in-manifest.md) né [/DLL](../../build/reference/dll-build-a-dll.md), un frammento del controllo dell'account utente predefinito che ha il controllo dell'account utente di livello impostato su *asInvoker* è inserito nel manifesto. Per ulteriori informazioni sui livelli di controllo dell'account utente, vedere [/MANIFESTUAC (informazioni dell'account vengono incorporati nel manifesto)](../../build/reference/manifestuac-embeds-uac-information-in-manifest.md).  
  
 Per modificare il comportamento predefinito del controllo dell'account utente, effettuare una delle operazioni seguenti:  
  
-   Specificare l'opzione /MANIFESTUAC e impostare il livello del controllo dell'account utente sul valore desiderato.  
  
-   In alternativa, l'opzione /MANIFESTUAC:NO se non si desidera generare un frammento del controllo dell'account utente nel manifesto.  
  
 Se si specifica /MANIFEST ma si specifica [/MANIFESTDEPENDENCY](../../build/reference/manifestdependency-specify-manifest-dependencies.md) commenti, viene creato un file manifesto. Un file manifesto non viene creato se si specifica /MANIFEST:NO.  
  
 Se si specifica /MANIFEST, il nome del file manifesto è lo stesso del nome del file di output con aggiunta l'estensione manifest. Ad esempio, se il nome del file di output è MyFile.exe, il nome del file manifesto è MyFile.exe.manifest.  Se si specifica /MANIFESTFILE:*nome*, il nome del manifesto è quello specificato in *nome*.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione** nodo.  
  
3.  Espandere il **Linker** nodo.  
  
4.  Selezionare il **File manifesto** pagina delle proprietà.  
  
5.  Modificare il **Genera manifesto** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateManifest%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)