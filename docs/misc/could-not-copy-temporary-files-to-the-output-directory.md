---
title: "Impossibile copiare i file temporanei nella directory di output | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.cannot_copy_to_run_dir"
ms.assetid: b8b54984-74c9-4b9b-8164-d0d13c141055
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Impossibile copiare i file temporanei nella directory di output
Il sistema del progetto non è riuscito a copiare i file temporanei nella directory di output I compilatori eseguono sempre la compilazione in directory intermedie, ad esempio obj\\`configname`. Al termine del processo di compilazione, il sistema del progetto copia i file dalla directory intermedia nella directory di output del progetto.  
  
 Questo problema può verificarsi quando uno degli assembly di cui si esegue la compilazione è maggiore di 64 kilobyte \(KB\) e si verifica una delle condizioni seguenti \(o entrambe\):  
  
-   La soluzione contiene progetti che vengono compilati nella stessa cartella di output.  
  
-   La proprietà Copia localmente in uno dei progetti o degli assembly a cui viene fatto riferimento è impostata su False.  
  
 **Per correggere l'errore**  
  
-   Compilare gli output dei singoli progetti in cartelle diverse.  
  
-   Impostare su True la proprietà Copia localmente per il progetto o l'assembly a cui viene fatto riferimento.  
  
-   Verificare che la finestra Visualizzatore oggetti non sia aperta.  
  
-   Verificare che lo stesso progetto o gli stessi progetti non siano aperti in un'altra istanza di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
## Vedere anche  
 [NIB: Procedura: impostare la proprietà Copia localmente di un riferimento](http://msdn.microsoft.com/it-it/dfe2ba13-f27f-4356-a481-ea67d5acacbd)