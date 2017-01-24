---
title: "Propriet&#224; Key dei tasti di scelta rapida | Microsoft Docs"
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
  - "Key (proprietà)"
ms.assetid: d1570cd9-b414-4cd6-96bd-47c38281eaca
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Propriet&#224; Key dei tasti di scelta rapida
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Di seguito vengono riportati i valori ammessi per la proprietà Key nella tabella dei tasti di scelta rapida.  
  
-   Un numero intero compreso tra 0 e 255 in formato decimale.  Il valore indica se viene utilizzato come valore ASCII o ANSI nel seguente modo:  
  
    -   I numeri a una cifra vengono sempre interpretati come il tasto corrispondente, anziché come valori ASCII o ANSI.  
  
    -   I valori compresi tra 1 e 26, preceduti da zero, vengono interpretati come valori da ^A a ^Z che rappresentano il valore ASCII delle lettere dell'alfabeto quando viene premuto contemporaneamente CTRL.  
  
    -   I valori da 27 a 32 vengono sempre interpretati come valori decimali a tre cifre compresi tra 027 e 032.  
  
    -   I valori compresi tra 033 e 255 vengono interpretati come valori ANSI, indipendentemente dal fatto che siano preceduti da 0 o meno.  
  
-   Un singolo carattere della tastiera.  Le lettere maiuscole comprese tra A e Z o i numeri compresi tra 0 e 9 possono essere valori ASCII o tasti virtuali. Tutti gli altri caratteri sono soltanto valori ASCII.  
  
-   Un singolo carattere maiuscolo della tastiera compreso tra A e Z, preceduto da un accento circonflesso \(^\), ad esempio ^C.  Se contemporaneamente viene premuto CTRL, viene immesso il valore ASCII del tasto.  
  
    > [!NOTE]
    >  Quando si immette un valore ASCII, le opzioni della proprietà Modifier sono limitate.  L'unico tasto di controllo utilizzabile è ALT.  
  
-   Qualsiasi identificatore di tasto virtuale valido.  La casella di riepilogo a discesa Key nella tabella dei tasti di scelta rapida contiene un elenco degli identificatori di tasto virtuale standard.  
  
    > [!TIP]
    >  Un altro modo per definire un tasto di scelta rapida consiste nel fare clic con il pulsante destro del mouse su una o più voci della tabella dei tasti di scelta rapida, scegliere **Digita carattere** dal menu di scelta rapida, quindi premere un tasto o una combinazione di tasti sulla tastiera.  Il comando **Digita carattere** è anche disponibile dal menu **Modifica**.  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [Setting Accelerator Properties](../windows/setting-accelerator-properties.md)   
 [Editing in an Accelerator Table](../windows/editing-in-an-accelerator-table.md)   
 [Accelerator Editor](../mfc/accelerator-editor.md)