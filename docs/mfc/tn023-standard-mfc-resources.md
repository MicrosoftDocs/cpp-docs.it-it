---
title: "TN023: risorse MFC standard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.resources"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "risorse [MFC]"
  - "risorse standard"
  - "TN023"
ms.assetid: 60af8415-c576-4c2f-a711-ca5da0b9a1f2
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# TN023: risorse MFC standard
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa nota vengono descritte le risorse MFC standard fornite e richieste della libreria MFC.  
  
## Risorse MFC standard  
 MFC offre due categorie di risorse predefinite che è possibile utilizzare in un'applicazione: risorse di ClipArt e risorse MFC standard del framework.  
  
 Le risorse clip art. sono risorse aggiuntive che il framework non dipende, ma che è possibile aggiungere all'interfaccia utente dell'applicazione.  Le risorse seguenti clip art. sono contenute nell'esempio generale [CLIPART](../top/visual-cpp-samples.md)MFC:  
  
-   Common.rc: Un singolo file di risorse contenente:  
  
    -   Una raccolta di icone che rappresentano varie aziende e attività di elaborazione dati.  
  
    -   Diversi cursori comuni \(vedere anche Afxres.rc\).  
  
    -   Una bitmap della barra degli strumenti che contiene molti pulsanti della barra degli strumenti.  
  
    -   Le risorse icona e della bitmap utilizzate da Commdlg.dll.  
  
-   Indicate.rc: Contiene le risorse di tipo stringa per gli indicatori dello stato del pulsante della barra di stato, ad esempio "FINE" per il BLOC MAIUSC.  
  
-   Prompts.rc: Contiene le risorse di stringa di menu\- richiesta per ogni comando predefinito, ad esempio "crea un nuovo documento" per `ID_FILE_NEW`.  
  
-   Commdlg.rc: Un file compatibile con Visual C\+\+ RC che contiene i modelli di finestre di dialogo standard COMMDLG.  
  
 Le risorse MFC standard del framework sono risorse con gli ID AFX\- definiti dal framework dipende dalle implementazioni interne.  Raramente sarà necessario modificare queste risorse AFX\- definite.  In questo caso, è necessario seguire la procedura descritta più avanti in questo argomento.  
  
 Le risorse seguenti del framework sono contenute in MFC \\ directory di inclusione:  
  
-   Afxres.rc: Risorse comuni utilizzate dal framework.  
  
-   Afxprint.rc: Risorse specifiche per la stampa.  
  
-   Afxolecl.rc: Risorse specifiche per le applicazioni client OLE.  
  
-   Afxolev.rc: Risorse specifiche per le applicazioni server OLE complete.  
  
## Utilizzo delle risorse clip art.  
  
#### Per utilizzare una risorsa del binario clip art.  
  
1.  Aprire il file di risorse dell'applicazione in Visual C\+\+.  
  
2.  Aprire Common.rc.  Questo file contiene tutte le risorse binarie clip art.  Ciò può richiedere tempo perché il file di Common.rc viene compilato.  
  
3.  Tenere premuto CTRL mentre si trascina le risorse che si desidera utilizzare da Common.rc al file di risorse dell'applicazione.  
  
 Per utilizzare altre risorse per ClipArt, attenersi alla medesima procedura.  L'unica differenza che apre il file RC appropriato anziché Common.rc.  
  
> [!NOTE]
>  Non fare attenzione alle risorse in modo non intenzionale di spostamento da Common.rc in modo permanente.  Se si utilizza il tasto CTRL mentre si trascina le risorse, verrà creata una copia.  Se non si memorizzano CTRL, trascinare le risorse verrà spostato.  Se si teme che consenta di ridurre le modifiche apportate al file di Common.rc, fare clic su "no" quando viene richiesto se salvare le modifiche apportate a Common.rc.  
  
> [!NOTE]
>  I file di risorse RC dispongono di un utilizzo speciale di `TEXTINCLUDE` nei rispettivi che impediranno accidentalmente di salvare sui file standard RC.  
  
### Personalizzare le risorse MFC standard del Framework  
 Le risorse MFC standard del framework viene in genere inclusi in un'applicazione utilizzando il comando \#include nel file di risorse di un'applicazione.  AppWizard genererà un file di risorse.  Questo file include risorse del framework di livello adeguato, a seconda delle opzioni di AppWizard la selezione.  È possibile rivedere, aggiungere, rimuovere o le risorse incluse modificando le direttive in fase di compilazione.  A tale scopo, aprire il menu di **Risorsa** e selezionare **Set include**.  Esaminare "elemento di modifica di direttive in fase di compilazione".  Di seguito è riportato un esempio.  
  
```  
#include "afxres.rc"  
#include "afxprint.rc"  
```  
  
 Il caso più comune di personalizzare le risorse MFC standard del framework aggiunge o rimuovere aggiuntivo include per il supporto di stampa e OLE del server OLE e il client.  
  
 In alcuni casi rari è possibile personalizzare il contenuto delle risorse MFC standard del framework per l'applicazione particolare, aggiungere e rimuovere non appena l'intero file.  I passaggi di seguito mostrano come è possibile limitare le risorse incluse:  
  
##### Per personalizzare il contenuto di un file di risorse MFC standard  
  
1.  Aprire il file di risorse in Visual C\+\+.  
  
2.  Utilizzando il set di risorse include il comando, rimuovere `#include` per il file RC standard che si desidera personalizzare.  Ad esempio, per personalizzare la barra degli strumenti di anteprima di stampa, rimuovere la riga di `#include "afxprint.rc"`.  
  
3.  Aprire i file di risorse del livello adeguato in MFC \\ INCLUDES.  All'esempio precedente in questo argomento, il file appropriato è MFC \\ include \\ Aafxprint.rc  
  
4.  Copiare tutte le risorse dal file standard RC nel file di risorse dell'applicazione.  
  
5.  Modificare la copia delle risorse MFC standard nel file di risorse dell'applicazione.  
  
> [!NOTE]
>  Non modificare direttamente le risorse nei file standard RC.  In tal modo sarà le risorse disponibili per ogni applicazione, non solo in tale attualmente in uso.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)