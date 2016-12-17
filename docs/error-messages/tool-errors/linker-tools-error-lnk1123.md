---
title: "Errore degli strumenti del linker LNK1123 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1123"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1123"
ms.assetid: fe47af69-0f42-4792-9133-541192cd8514
caps.latest.revision: 15
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK1123
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

errore durante la conversione in formato COFF: file non valido o danneggiato  
  
 I file di input devono avere il formato COFF \(Common Object File Format\).  Se un file di input non è in formato COFF, il linker automaticamente prova a convertire gli oggetti OMF a 32 bit in COFF, oppure esegue CVTRES.EXE per convertire i file di risorse.  Questo messaggio indica che il linker non può convertire il file.  L'errore può anche verificarsi quando si usa una versione non compatibile di CVTRES.EXE da un'altra versione di Visual Studio, del kit di sviluppo di Windows o di .NET Framework.  
  
> [!NOTE]
>  Se si esegue una versione precedente di Visual Studio, la conversione automatica potrebbe non essere supportata.  
  
### Per risolvere il problema  
  
-   Applicare tutti i Service Pack e gli aggiornamenti per la versione di Visual Studio.  Ciò è particolarmente importante per Visual Studio 2010.  
  
-   Provare a compilare con disattivato il collegamento incrementale.  Sulla barra dei menu scegliere **Progetto**, **Proprietà**.  Nella finestra di dialogo **Pagina delle proprietà** espandere **Proprietà di configurazione**, **Linker**.  Impostare il valore di **Attiva collegamento incrementale** su **No**.  
  
-   Verificare che la versione di CVTRES.EXE trovata per prima nella variabile di ambiente PATH corrisponda alla versione degli strumenti per la compilazione o alla versione del set di strumenti della piattaforma usati nel progetto.  
  
-   Provare a disattivare l'opzione Incorpora manifesto.  Sulla barra dei menu scegliere **Progetto**, **Proprietà**.  Nella finestra di dialogo **Pagine delle proprietà** espandere **Proprietà di configurazione**, **Strumento Manifesto**, **Input e output**.  Modificare il valore di **Incorpora manifesto** su **No**.  
  
-   Verificare che il tipo di file sia valido.  Assicurarsi, ad esempio, che un oggetto OMF sia da 32 bit e non da 16 bit.  Per ulteriori informazioni, vedere [File obj come input del linker](../../build/reference/dot-obj-files-as-linker-input.md) e [Specifica Microsoft PE e COFF](http://go.microsoft.com/fwlink/p/?LinkId=93292).  
  
-   Verificare che il file non sia danneggiato.  Ricompilare, se necessario.  
  
## Vedere anche  
 [File obj come input del linker](../../build/reference/dot-obj-files-as-linker-input.md)   
 [Riferimenti a EDITBIN](../../build/reference/editbin-reference.md)   
 [Riferimenti a DUMPBIN](../../build/reference/dumpbin-reference.md)