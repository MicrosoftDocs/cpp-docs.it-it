---
title: "Aggiunta di una propriet&#224; al controllo (Esercitazione di ATL, parte 3) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
ms.assetid: f775fe34-103b-4f07-9999-400e987ee030
caps.latest.revision: 15
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta di una propriet&#224; al controllo (Esercitazione di ATL, parte 3)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

`IPolyCtl` è l'interfaccia che contiene metodi personalizzati e le proprietà del controllo e si aggiungerà una proprietà su.  
  
### Per aggiungere una proprietà tramite Aggiunta guidata proprietà  
  
1.  In Visualizzazione classi, espandi ramo polygon.  
  
2.  Fare clic con il pulsante destro del mouse IPolyCtl.  
  
3.  Scegliere dal menu di scelta rapida, fare clic **Aggiungi**quindi scegliere **Aggiungere la proprietà**.  
  
     L'aggiunta guidata proprietà verrà visualizzato.  
  
4.  Nell'elenco a discesa dei tipi di proprietà, `SHORT`selezionato.  
  
5.  Tipo `lati` come **nome proprietà.**  
  
6.  Scegliere **Fine** da completare aggiungere la proprietà.  
  
 Quando si aggiunge la proprietàinterfaccia, il MIDL \(il programma che compila i file .idl\) definisce un metodo `Get` per recuperare il valore e un metodo `Put` per impostare un nuovo valore.  I metodi sono denominati anteponendo `put_` e `get_` il nome di proprietà.  
  
 L'aggiunta guidata proprietà vengono aggiunte le righe necessarie nel file IDL.  Vengono aggiunti i prototipi di funzione `Put` e `Get` alla definizione della classe in PolyCtl.h e aggiungere un'implementazione vuota a PolyCtl.cpp.  È possibile controllare questo aprendo PolyCtl.cpp e cercando le funzioni `get_Sides` e `put_Sides`.  
  
 Sebbene ottenere funzioni di base per impostare e recuperare la proprietà, un punto deve essere archiviata.  Verrà creata una variabile per archiviare la proprietà e aggiornare pertanto le funzioni.  
  
#### Per creare una variabile per archiviare la proprietà e aggiornare inserito e per ottenere i metodi  
  
1.  In Esplora soluzioni, PolyCtl.h aperti e aggiungere la seguente riga dopo la definizione `m_clrFillColor`:  
  
     [!code-cpp[NVC_ATL_Windowing#44](../atl/codesnippet/CPP/adding-a-property-to-the-control-atl-tutorial-part-3_1.h)]  
  
2.  Impostare il valore predefinito `m_nSides`.  Rendere la forma predefinita un triangolo aggiungere una riga al costruttore in PolyCtl.h:  
  
     [!code-cpp[NVC_ATL_Windowing#45](../atl/codesnippet/CPP/adding-a-property-to-the-control-atl-tutorial-part-3_2.h)]  
  
3.  Implementare i metodi `Get` e `Put`.  Le dichiarazioni di funzione `put_Sides` e `get_Sides` sono state aggiunte a PolyCtl.h.  Sostituire il codice in PolyCtl.cpp per `get_Sides` e in `put_Sides` con il codice seguente:  
  
     [!code-cpp[NVC_ATL_Windowing#46](../atl/codesnippet/CPP/adding-a-property-to-the-control-atl-tutorial-part-3_3.cpp)]  
  
 Il metodo `get_Sides` restituisce il valore corrente della proprietà `Sides` tramite il puntatore `pVal`.  Nel metodo `put_Sides`, il codice assicura l'utente sta impostando la proprietà `Sides` a un valore accettabile.  Il minimo deve essere 2 e poiché una matrice di punti verrà utilizzata per ciascun lato, 100 è un limite ragionevole per un valore massimo.  
  
 A questo punto si dispone di una proprietà denominata `Sides`.  Il passaggio successivo, verrà modificato il codice di disegno per utilizzarla.  
  
 [Per tornare al passaggio 2](../atl/adding-a-control-atl-tutorial-part-2.md) &#124; [Nel passaggio 4](../atl/changing-the-drawing-code-atl-tutorial-part-4.md)  
  
## Vedere anche  
 [Esercitazione](../atl/active-template-library-atl-tutorial.md)