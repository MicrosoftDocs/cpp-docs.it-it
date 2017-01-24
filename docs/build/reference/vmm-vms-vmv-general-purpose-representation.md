---
title: "/vmm, /vms, /vmv (Rappresentazione generale) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/vms"
  - "/vmm"
  - "/vmv"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/vmm (opzione del compilatore) [C++]"
  - "/vms (opzione del compilatore) [C++]"
  - "/vmv (opzione del compilatore) [C++]"
  - "Rappresentazione generale (opzione del compilatore)"
  - "Ereditarietà singola (opzione del compilatore)"
  - "Ereditarietà virtuale (opzione del compilatore)"
  - "vmm (opzione del compilatore) [C++]"
  - "-vmm (opzione del compilatore) [C++]"
  - "vms (opzione del compilatore) [C++]"
  - "-vms (opzione del compilatore) [C++]"
  - "vmv (opzione del compilatore) [C++]"
  - "-vmv (opzione del compilatore) [C++]"
ms.assetid: 0fcd7ae0-3031-4c62-a2a8-e154c8685dae
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /vmm, /vms, /vmv (Rappresentazione generale)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Viene utilizzato quando [\/vmb, \/vmg \(Metodo di rappresentazione\)](../../build/reference/vmb-vmg-representation-method.md) è selezionato come [metodo di rappresentazione](../../build/reference/vmb-vmg-representation-method.md).  Queste opzioni indicano il modello di ereditarietà della definizione delle classi non ancora specificate.  
  
## Sintassi  
  
```  
/vmm  
/vms  
/vmv  
```  
  
## Note  
 Le opzioni sono descritte nella tabella riportata di seguito.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**\/vmm**|Specifica che la rappresentazione più generale di un puntatore a un membro di una classe è del tipo che utilizza l'ereditarietà multipla.<br /><br /> La [parola chiave di ereditarietà](../../cpp/inheritance-keywords.md) corrispondente e l'argomento di [\#pragma pointers\_to\_members](../../preprocessor/pointers-to-members.md) sono **multiple\_inheritance**.<br /><br /> Questa rappresentazione è più grande di quella richiesta per l'ereditarietà singola.<br /><br /> Se il modello di ereditarietà di una definizione di classe per cui un puntatore a un membro è dichiarato è virtuale, il compilatore genererà un errore.|  
|**\/vms**|Specifica che la rappresentazione più generale di un puntatore a un membro di una classe è del tipo che utilizza l'ereditarietà singola o che non la utilizza affatto.<br /><br /> La [parola chiave di ereditarietà](../../cpp/inheritance-keywords.md) corrispondente e l'argomento di [\#pragma pointers\_to\_members](../../preprocessor/pointers-to-members.md) sono **single\_inheritance**.<br /><br /> Questa è la rappresentazione più piccola possibile di un puntatore a un membro di una classe.<br /><br /> Se il modello di ereditarietà di una definizione di classe per cui un puntatore a un membro è dichiarato è multiplo o virtuale, il compilatore genererà un errore.|  
|**\/vmv**|Specifica che la rappresentazione più generale di un puntatore a un membro di una classe è del tipo che utilizza l'ereditarietà virtuale.  Non produce mai un errore ed è l'impostazione predefinita.<br /><br /> La [parola chiave di ereditarietà](../../cpp/inheritance-keywords.md) corrispondente e l'argomento di [\#pragma pointers\_to\_members](../../preprocessor/pointers-to-members.md) sono **virtual\_inheritance**.<br /><br /> Questa opzione richiede un puntatore più grande e del codice aggiuntivo per interpretare il puntatore rispetto alle altre opzioni.|  
  
 Quando si specifica una di queste opzioni di modelli di ereditarietà, il modello scelto verrà utilizzato per tutti i puntatori ai membri di classe, indipendentemente dal tipo di ereditarietà o dal fatto che il puntatore venga dichiarato prima o dopo la classe.  Pertanto, se si utilizzano sempre classi a ereditarietà singola, è possibile ridurre le dimensioni del codice eseguendo la compilazione con **\/vms**. Se tuttavia si desidera utilizzare il caso più generale, rinunciando alla rappresentazione dei dati di dimensioni maggiori, la compilazione deve essere eseguita con  **\/vmv**.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [\/vmb, \/vmg \(Metodo di rappresentazione\)](../../build/reference/vmb-vmg-representation-method.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)