---
title: "Impossibile copiare il file &#39;nomefile&#39; nella directory di esecuzione. &lt;motivo&gt; | Microsoft Docs"
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
  - "vs.tasklisterror.cant_copy_to_run_dir"
ms.assetid: 80474e62-7cef-48e9-a7c0-820345d5b591
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Impossibile copiare il file &#39;nomefile&#39; nella directory di esecuzione. &lt;motivo&gt;
Questo errore viene visualizzato quando:  
  
-   Un riferimento con la proprietà `CopyLocal` \(vedere la finestra Proprietà quando il riferimento è selezionato in Esplora soluzioni\) impostata su `true` non può essere copiato nella directory da cui viene eseguito il progetto.  
  
-   Una dipendenza di un riferimento con una proprietà `CopyLocal` impostata su `true` non può essere copiata nella directory da cui viene eseguito il progetto.  
  
-   Qualsiasi altro file da copiare in locale non può essere copiato nella directory da cui viene eseguito il progetto.  
  
 In genere, il valore `reason` indicato alla fine del messaggio di errore indica che il file è in uso da un altro processo. È probabile che il file sia bloccato da altre operazioni all'interno di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
 Potrebbe essere presente un problema associato alla compilazione dei progetti nella stessa directory di output. In questo caso, compilare i due progetti in directory diverse. Quando si compila in directory diverse, il sistema del progetto copia tutti gli assembly dipendenti nella directory di output del progetto.  
  
 L'aggiunta dell'output di qualsiasi progetto in corso come elemento della casella degli strumenti causerà il blocco del riferimento dalle finestre di progettazione gestite.  
  
 Il sistema del progetto non sarà in grado di aggiornare la directory di output se l'output è in esecuzione.  
  
 **Per correggere l'errore**  
  
-   Controllare lo spazio su disco disponibile nel computer  
  
-   Verificare se si sta per raggiungere il limite MAX\_PATH imposto dal file system  
  
     La situazione non impedirà la compilazione del progetto. Tuttavia, potrebbe impedire la corretta esecuzione del progetto, perché questo avviso indica che una copia privata di un assembly a cui si fa riferimento potrebbe non essere aggiornata correttamente. Anche se il progetto potrebbe essere apparentemente in esecuzione, è possibile che vengano generate eccezioni di caricamento dei tipi o altri comportamenti imprevisti durante l'esecuzione di alcuni percorsi del codice.  
  
## Vedere anche  
 [NIB: Procedura: impostare la proprietà Copia localmente di un riferimento](http://msdn.microsoft.com/it-it/dfe2ba13-f27f-4356-a481-ea67d5acacbd)