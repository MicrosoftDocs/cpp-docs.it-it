---
title: "Utilizzo dell&#39;associazione dati RDO in Visual C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "associazione dati [C++], RDO"
  - "RDO [C++], associazione dati"
  - "RDO RemoteData (controllo), associazione dati in Visual C++"
  - "RemoteData (controllo), associazione dati in Visual C++"
ms.assetid: 02b9cfe7-7bbe-4a01-b075-e28d9536ac4b
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo dell&#39;associazione dati RDO in Visual C++
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per utilizzare l'associazione dati RDO in Visual C\+\+ è necessario aggiungere un controllo RemoteData RDO e puntare a un'origine dati e a un'origine record \(query SQL\).  È inoltre necessario aggiungere un controllo RDO associato a dati, impostarlo affinché punti a un controllo RemoteData RDO e selezionare i campi da associare all'origine record del controllo RemoteData RDO.  
  
### Per utilizzare l'associazione dati RDO in Visual C\+\+  
  
1.  Configurare un'[origine dati ODBC](../../data/ado-rdo/odbc-connections.md), se questa operazione non è già stata eseguita.  
  
2.  Creare un'applicazione MFC basata su una finestra di dialogo o un'applicazione MFC basata su una Formview mediante la Creazione guidata applicazione MFC.  
  
3.  Aggiungere il controllo Microsoft RemoteData \(controllo RemoteData RDO\) alla finestra di dialogo. Vedere [Inserimento di un controllo in un'applicazione Visual C\+\+](../../data/ado-rdo/inserting-the-control-into-a-visual-cpp-application.md).  
  
4.  Impostare il controllo RemoteData RDO affinché punti all'origine dati ODBC.  
  
    1.  Fare clic con il pulsante destro del mouse sul controllo, quindi scegliere **Proprietà**.  
  
    2.  Fare clic sulla scheda **Controllo**.  
  
    3.  Impostare **DataSource** sull'origine dati ODBC.  
  
    4.  Se necessario, impostare nome utente e password per l'origine dati ODBC.  È possibile non specificare questi valori se l'origine dati non richiede nome utente o password.  
  
    5.  Immettere una query SQL nella proprietà **SQL**.  È possibile associare i controlli associati a dati al risultato di questa query.  
  
5.  Impostare eventuali altre proprietà del controllo RemoteData RDO come necessario.  
  
6.  Aggiungere un controllo associato a dati.  Aggiungere ad esempio il controllo **DBGrid** e impostare l'origine dati come segue:  
  
    1.  Fare clic con il pulsante destro del mouse su DBGrid, quindi scegliere **Proprietà**.  
  
    2.  Fare clic sulla scheda **Tutte**.  
  
    3.  Impostare la proprietà **DataSource** sul controllo RemoteData RDO.  Fare clic sulla casella combinata a discesa della proprietà e cercare l'ID del controllo RemoteData RDO.  Il nome predefinito dell'ID è IDC\_REMOTEDATACTL1.  
  
7.  Per l'esecuzione in modalità test, utilizzare CTRL\+T.  Sarà possibile scorrere i dati.  Premere ESC o chiudere la finestra di dialogo per terminare la modalità test.  
  
 Sarà possibile scorrere i dati anche compilando ed eseguendo il programma.  
  
## Vedere anche  
 [Associazione dati RDO](../../data/ado-rdo/rdo-databinding.md)   
 [Associazione dati con controlli ActiveX in Visual C\+\+](../../data/ado-rdo/databinding-with-activex-controls-in-visual-cpp.md)