---
title: "Programmazione con CComBSTR (ATL) | Microsoft Docs"
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
  - "CComBSTR (classe), programmazione"
  - "Unicode, utilizzo di CComBSTR [ATL]"
ms.assetid: d3bd0851-d132-4be9-9c4c-6ccba17acb2b
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Programmazione con CComBSTR (ATL)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe [CComBSTR](../atl/reference/ccombstr-class.md) ATL fornisce un wrapper del tipo di dati `BSTR`.  Mentre `CComBSTR` è uno strumento utile, esistono diverse situazioni che richiedono una particolare attenzione.  
  
-   [Problemi di conversione](#programmingwithccombstr_conversionissues)  
  
-   [Problemi di ambito](#programmingwithccombstr_scopeissues)  
  
-   [Liberare in modo esplicito l'oggetto di CComBSTR](#programmingwithccombstr_explicitlyfreeing)  
  
-   [Utilizzo di oggetti di CComBSTR nei cicli](#programmingwithccombstr_usingloops)  
  
-   [Problemi di perdita di memoria](#programmingwithccombstr_memoryleaks)  
  
##  <a name="programmingwithccombstr_conversionissues"></a> Problemi di conversione  
 Sebbene diversi metodi `CComBSTR` automaticamente convertano un argomento stringa ANSI in Unicode, i metodi restituiscono sempre le stringhe di formato Unicode.  Per convertire la stringa di output dell'ANSI, utilizzare una classe di conversione ATL.  Per ulteriori informazioni sulle classi di conversione ATL, vedere [Macro per la conversione delle stringhe MFC e ATL](../Topic/ATL%20and%20MFC%20String%20Conversion%20Macros.md).  
  
### Esempio  
 [!code-cpp[NVC_ATL_Utilities#114](../atl/codesnippet/CPP/programming-with-ccombstr-atl_1.cpp)]  
  
 Se si utilizza un valore letterale stringa per modificare un oggetto `CComBSTR`, utilizzare le stringhe di caratteri estesi.  Riducendo in questo modo le conversioni non necessari.  
  
### Esempio  
 [!code-cpp[NVC_ATL_Utilities#115](../atl/codesnippet/CPP/programming-with-ccombstr-atl_2.cpp)]  
  
##  <a name="programmingwithccombstr_scopeissues"></a> Problemi di ambito  
 Come con qualsiasi classe garbata, `CComBSTR` libererà le risorse quando esce dall'ambito.  Se una funzione restituisce un puntatore alla stringa `CComBSTR`, questa può causare problemi, poiché il puntatore farà riferimento a memoria che è già stata liberata.  In questi casi, utilizzare il metodo **Copia**, come illustrato di seguito.  
  
### Esempio  
 [!code-cpp[NVC_ATL_Utilities#116](../atl/codesnippet/CPP/programming-with-ccombstr-atl_3.cpp)]  
  
##  <a name="programmingwithccombstr_explicitlyfreeing"></a> Liberare in modo esplicito l'oggetto di CComBSTR  
 Viene esplicitamente formato della stringa contenuta nell'oggetto `CComBSTR` prima dell'oggetto uscire dall'ambito.  Se la stringa viene liberata, l'oggetto `CComBSTR` non è valido.  
  
### Esempio  
 [!code-cpp[NVC_ATL_Utilities#117](../atl/codesnippet/CPP/programming-with-ccombstr-atl_4.cpp)]  
  
##  <a name="programmingwithccombstr_usingloops"></a> Utilizzo di oggetti di CComBSTR nei cicli  
 Poiché la classe `CComBSTR` alloca un buffer per eseguire determinate operazioni, come operatore `+=` o il metodo **Append**, non è consigliabile eseguire la modifica delle stringhe in un ciclo rigido.  In queste situazioni, `CStringT` offre prestazioni migliori.  
  
### Esempio  
 [!code-cpp[NVC_ATL_Utilities#118](../atl/codesnippet/CPP/programming-with-ccombstr-atl_5.cpp)]  
  
##  <a name="programmingwithccombstr_memoryleaks"></a> Problemi di perdita di memoria  
 Passando l'indirizzo `CComBSTR` inizializzato a una funzione come parametro **\[out\]** causa una perdita di memoria.  
  
 Nell'esempio riportato di seguito, la stringa allocata per contenere la stringa `"Initialized"` è cast quando la funzione `MyGoodFunction` sostituisce la stringa.  
  
 [!code-cpp[NVC_ATL_Utilities#119](../atl/codesnippet/CPP/programming-with-ccombstr-atl_6.cpp)]  
  
 Per evitare la perdita, chiamare il metodo **Empty** gli oggetti esistenti `CComBSTR` prima di passare all'indirizzo come parametro **\[out\]**.  
  
 Si noti che lo stesso codice non può provocare una perdita se il parametro di funzione è **\[in, out\]**.  
  
## Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)   
 [CStringT Class](../atl-mfc-shared/reference/cstringt-class.md)   
 [wstring](../Topic/wstring.md)   
 [String Conversion Macros](../atl/reference/string-conversion-macros.md)