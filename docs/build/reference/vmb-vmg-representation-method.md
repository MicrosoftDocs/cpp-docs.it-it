---
title: "/vmb, /vmg (Metodo di rappresentazione) | Microsoft Docs"
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
  - "/vmb"
  - "/vmg"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/vmb (opzione del compilatore) [C++]"
  - "/vmg (opzione del compilatore) [C++]"
  - "Metodo di rappresentazione (opzione del compilatore) [C++]"
  - "vmb (opzione del compilatore) [C++]"
  - "-vmb (opzione del compilatore) [C++]"
  - "vmg (opzione del compilatore) [C++]"
  - "-vmg (opzione del compilatore) [C++]"
ms.assetid: ecdb391c-7dab-40b1-916b-673d10889fd4
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /vmb, /vmg (Metodo di rappresentazione)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Selezionano il metodo che il compilatore utilizza per rappresentare puntatori a membri di classe.  
  
 Utilizzare **\/vmb** se si definisce sempre una classe prima di dichiarare un puntatore a un membro della classe.  
  
 Utilizzare **\/vmg** per dichiarare un puntatore a un membro della classe prima di definire la classe.  Questa esigenza potrebbe manifestarsi se si definiscono membri in due classi diverse che fanno riferimento l'una all'altra.  Per questo tipo di classi con riferimenti reciproci, è necessario fare riferimento a una classe prima di definirla.  
  
## Sintassi  
  
```  
/vmb  
/vmg  
```  
  
## Note  
 È anche possibile utilizzare [pointers\_to\_members](../../preprocessor/pointers-to-members.md) o [Parole chiave di ereditarietà](../../cpp/inheritance-keywords.md) nel codice per specificare una rappresentazione del puntatore.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)