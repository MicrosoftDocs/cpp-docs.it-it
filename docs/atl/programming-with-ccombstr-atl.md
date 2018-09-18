---
title: Programmazione con CComBSTR (ATL) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CComBSTR class, programming with
- Unicode, using CComBSTR [ATL]
ms.assetid: d3bd0851-d132-4be9-9c4c-6ccba17acb2b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b6a2e6c334016c79f02dc43e9790d7dfc4645212
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46075618"
---
# <a name="programming-with-ccombstr-atl"></a>Programmazione con CComBSTR (ATL)

La classe ATL [CComBSTR](../atl/reference/ccombstr-class.md) fornisce un wrapper per il tipo di dati BSTR. Mentre `CComBSTR` è uno strumento utile, esistono diverse situazioni che richiedono attenzione.

- [Problemi di conversione](#programmingwithccombstr_conversionissues)

- [Problemi relativi all'ambito](#programmingwithccombstr_scopeissues)

- [Rilascio esplicito dell'oggetto di CComBSTR](#programmingwithccombstr_explicitlyfreeing)

- [Utilizzo di CComBSTR oggetti nei cicli](#programmingwithccombstr_usingloops)

- [Problemi relativi alla perdita di memoria](#programmingwithccombstr_memoryleaks)

##  <a name="programmingwithccombstr_conversionissues"></a> Problemi di conversione

Sebbene diversi `CComBSTR` metodi convertirà automaticamente un argomento di tipo stringa ANSI in Unicode, i metodi restituiranno sempre stringhe di formato Unicode. Per convertire la stringa di output in ANSI, usare una classe di conversione ATL. Per altre informazioni sulle classi di conversione ATL, vedere [macro di conversione di stringhe MFC e ATL](reference/string-conversion-macros.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#114](../atl/codesnippet/cpp/programming-with-ccombstr-atl_1.cpp)]

Se si usa un valore letterale stringa per modificare un `CComBSTR` oggetto, usare le stringhe di caratteri "wide". Ciò riduce le conversioni non necessari.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#115](../atl/codesnippet/cpp/programming-with-ccombstr-atl_2.cpp)]

##  <a name="programmingwithccombstr_scopeissues"></a> Problemi relativi all'ambito

Come con qualsiasi classe ben progettate, `CComBSTR` libera le risorse quando esce dall'ambito. Se una funzione restituisce un puntatore al `CComBSTR` stringa, ciò può provocare problemi, come il puntatore fa riferimento alla memoria che è già stata rilasciata. In questi casi, usare il `Copy` metodo, come illustrato di seguito.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#116](../atl/codesnippet/cpp/programming-with-ccombstr-atl_3.cpp)]

##  <a name="programmingwithccombstr_explicitlyfreeing"></a> Rilascio esplicito dell'oggetto di CComBSTR

È possibile liberare in modo esplicito la stringa contenuta nel `CComBSTR` prima che l'oggetto esca dall'ambito dell'oggetto. Se la stringa viene liberata, il `CComBSTR` oggetto non è valido.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#117](../atl/codesnippet/cpp/programming-with-ccombstr-atl_4.cpp)]

##  <a name="programmingwithccombstr_usingloops"></a> Utilizzo di CComBSTR oggetti nei cicli

Come le `CComBSTR` classe alloca un buffer per eseguire determinate operazioni, ad esempio il `+=` operatore o `Append` metodo, non è consigliabile eseguire la modifica di stringhe all'interno di un loop stretto. In queste situazioni, `CStringT` offre prestazioni migliori.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#118](../atl/codesnippet/cpp/programming-with-ccombstr-atl_5.cpp)]

##  <a name="programmingwithccombstr_memoryleaks"></a> Problemi relativi alla perdita di memoria

Passare l'indirizzo di un oggetto inizializzato `CComBSTR` a una funzione come un **[out]** parametro causa una perdita di memoria.

Nell'esempio seguente, la stringa allocata per contenere la stringa `"Initialized"` va persa quando la funzione `MyGoodFunction` sostituisce la stringa.

[!code-cpp[NVC_ATL_Utilities#119](../atl/codesnippet/cpp/programming-with-ccombstr-atl_6.cpp)]

Per evitare la perdita, chiamare il `Empty` metodo esistente `CComBSTR` gli oggetti prima di passare l'indirizzo come un' **[out]** parametro.

Si noti che lo stesso codice potrebbe non causare una perdita se il parametro della funzione è stata **[in, out]**.

## <a name="see-also"></a>Vedere anche

[Concetti](../atl/active-template-library-atl-concepts.md)<br/>
[Classe CStringT](../atl-mfc-shared/reference/cstringt-class.md)<br/>
[wstring](../standard-library/basic-string-class.md)<br/>
[Macro di conversione di stringhe](../atl/reference/string-conversion-macros.md)

