---
title: Programmazione con CComBSTR (ATL) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- CComBSTR class, programming with
- Unicode, using CComBSTR [ATL]
ms.assetid: d3bd0851-d132-4be9-9c4c-6ccba17acb2b
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f8f496dd73c2d15f8f78ddbdc205f31a8520c674
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="programming-with-ccombstr-atl"></a>Programmazione con CComBSTR (ATL)
La classe ATL [CComBSTR](../atl/reference/ccombstr-class.md) fornisce un wrapper per il `BSTR` tipo di dati. Mentre `CComBSTR` è uno strumento utile, esistono diverse situazioni che richiedono attenzione.  
  
-   [Problemi di conversione](#programmingwithccombstr_conversionissues)  
  
-   [Problemi relativi all'ambito](#programmingwithccombstr_scopeissues)  
  
-   [Liberare in modo esplicito l'oggetto CComBSTR](#programmingwithccombstr_explicitlyfreeing)  
  
-   [Utilizzo di oggetti CComBSTR nei cicli](#programmingwithccombstr_usingloops)  
  
-   [Problemi relativi alla perdita di memoria](#programmingwithccombstr_memoryleaks)  
  
##  <a name="programmingwithccombstr_conversionissues"></a>Problemi di conversione  
 Sebbene diversi `CComBSTR` metodi vengono convertiti automaticamente in un argomento di stringa ANSI in Unicode, i metodi restituirà sempre stringhe di formato Unicode. Per convertire la stringa di output ANSI, utilizzare una classe di conversione ATL. Per ulteriori informazioni sulle classi di conversione ATL, vedere [macro di conversione di stringhe MFC e ATL](reference/string-conversion-macros.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#114](../atl/codesnippet/cpp/programming-with-ccombstr-atl_1.cpp)]  
  
 Se si utilizza un valore letterale stringa per modificare un `CComBSTR` oggetto, usare le stringhe di caratteri wide. Ciò riduce le conversioni non necessari.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#115](../atl/codesnippet/cpp/programming-with-ccombstr-atl_2.cpp)]  
  
##  <a name="programmingwithccombstr_scopeissues"></a>Problemi relativi all'ambito  
 Come con qualsiasi classe ben progettate, `CComBSTR` libera le risorse quando esce dall'ambito. Se una funzione restituisce un puntatore al `CComBSTR` stringa, questo può causare problemi, quando il puntatore fa riferimento alla memoria che è già stata liberata. In questi casi, utilizzare il **copia** (metodo), come illustrato di seguito.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#116](../atl/codesnippet/cpp/programming-with-ccombstr-atl_3.cpp)]  
  
##  <a name="programmingwithccombstr_explicitlyfreeing"></a>Liberare in modo esplicito l'oggetto CComBSTR  
 È possibile liberare in modo esplicito la stringa contenuta nella `CComBSTR` prima che l'oggetto esca dall'ambito. Se la stringa viene liberata, il `CComBSTR` oggetto non è valido.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#117](../atl/codesnippet/cpp/programming-with-ccombstr-atl_4.cpp)]  
  
##  <a name="programmingwithccombstr_usingloops"></a>Utilizzo di oggetti CComBSTR nei cicli  
 Come il `CComBSTR` classe alloca un buffer per eseguire determinate operazioni, ad esempio il `+=` operatore o **Append** metodo, non è consigliabile eseguire la modifica di stringhe all'interno di un loop. In queste situazioni, `CStringT` offre prestazioni migliori.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#118](../atl/codesnippet/cpp/programming-with-ccombstr-atl_5.cpp)]  
  
##  <a name="programmingwithccombstr_memoryleaks"></a>Problemi relativi alla perdita di memoria  
 Passa l'indirizzo di un oggetto inizializzato `CComBSTR` a una funzione come un **[out]** parametro causa una perdita di memoria.  
  
 Nell'esempio seguente, la stringa allocata per contenere la stringa `"Initialized"` viene perso quando la funzione `MyGoodFunction` sostituisce la stringa.  
  
 [!code-cpp[NVC_ATL_Utilities#119](../atl/codesnippet/cpp/programming-with-ccombstr-atl_6.cpp)]  
  
 Per evitare la perdita, chiamare il **vuoto** metodo esistente `CComBSTR` oggetti prima di passare l'indirizzo come un **[out]** parametro.  
  
 Si noti che lo stesso codice non potrebbe causare una perdita se il parametro della funzione è stata **[in, out]**.  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)   
 [Classe CStringT](../atl-mfc-shared/reference/cstringt-class.md)   
 [wstring](../standard-library/basic-string-class.md)   
 [Macro di conversione di stringhe](../atl/reference/string-conversion-macros.md)

