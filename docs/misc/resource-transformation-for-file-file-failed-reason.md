---
title: "Resource transformation for file &#39;file&#39; failed. &lt;reason&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.resx_generator_failed"
ms.assetid: 6b537d38-1da9-4f5f-9ae9-1f26e260c2ac
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Resource transformation for file &#39;file&#39; failed. &lt;reason&gt;
Si è verificato un errore nel processore delle risorse utilizzato per convertire i file RESX in file RESOURCES binari.  La ragione specifica, se disponibile, è specificata alla fine della stringa.  Se si verifica questo errore, il processo di compilazione non verrà completato.  
  
 L'errore è provocato in genere da un file RESX danneggiato.  È possibile ad esempio che il file sia stato aperto e modificato in un editor di testo.  
  
 Se viene ricevuto un \<Motivo\> "La voce è già stata aggiunta.  Chiave nel dizionario: 'NewControlName.\<Nome proprietà\>' Aggiunta chiave: 'ControlName.\<Nome proprietà\>'," procedere come illustrato di seguito per riprodurre e correggere l'errore.  
  
### Per riprodurre l'errore  
  
1.  Creare una nuova applicazione Windows.  Per impostazione predefinita viene creato Form1.  
  
2.  Scegliere **Proprietà** dal menu **Visualizza**.  
  
3.  Nella finestra **Proprietà**, impostare la proprietà **Localizable** su `True`.  
  
4.  Nella finestra **Proprietà** fare clic su **Lingua**, quindi impostare il valore su "Giapponese".  
  
5.  Dalla Casella degli strumenti trascinare un pulsante nel form.  
  
6.  Modificare il nome del pulsante da "Button1" in "BUTTON1".  
  
7.  Scegliere **Compila soluzione** dal menu **Compila**.  
  
### Per correggere l'errore  
  
1.  Nel menu **File** selezionare **Apri**, quindi **File**.  
  
2.  Individuare il file Form1.resx, quindi fare clic su **OK**.  Verrà visualizzato il file Form1.resx.  
  
3.  Individuare i valori delle chiavi originali, quindi eliminarli manualmente dall'elenco dei dati.  Ad esempio, è presente un pulsante denominato "Button1".  Modificare il nome del pulsante in "BUTTON1".  I valori delle chiavi di "Button1" e "BUTTON1" si trovano nel file Form1.resx.  Rimuovere tutti gli elementi di "Button1", quindi ricompilare il progetto.  
  
## Vedere anche  
 [Resources in .Resx File Format](http://msdn.microsoft.com/it-it/0c476133-87e4-47e8-b0ef-4b88f4ef3dc5)   
 [File Types and File Extensions in Visual Basic and Visual C\#](http://msdn.microsoft.com/it-it/f793852c-da06-4d52-a826-65f635844772)