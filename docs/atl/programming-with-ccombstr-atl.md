---
title: Programmazione con CComBSTR (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- CComBSTR class, programming with
- Unicode, using CComBSTR [ATL]
ms.assetid: d3bd0851-d132-4be9-9c4c-6ccba17acb2b
ms.openlocfilehash: 020c2d18c721e658d15bb1451039154ae50b99f6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321787"
---
# <a name="programming-with-ccombstr-atl"></a>Programmazione con CComBSTR (ATL)

La classe ATL [CComBSTR](../atl/reference/ccombstr-class.md) fornisce un wrapper per il tipo di dati BSTR. Sebbene `CComBSTR` sia uno strumento utile, esistono diverse situazioni che richiedono cautela.

- [Problemi di conversione](#programmingwithccombstr_conversionissues)

- [Problemi relativi all'ambito](#programmingwithccombstr_scopeissues)

- [Liberare in modo esplicito l'oggetto CComBSTRExplicitly Freeing the CComBSTR Object](#programmingwithccombstr_explicitlyfreeing)

- [Utilizzo di oggetti CComBSTR nei cicliUsing CComBSTR Objects in Loops](#programmingwithccombstr_usingloops)

- [Problemi di perdita di memoria](#programmingwithccombstr_memoryleaks)

## <a name="conversion-issues"></a><a name="programmingwithccombstr_conversionissues"></a>Problemi di conversione

Anche `CComBSTR` se diversi metodi convertiranno automaticamente un argomento stringa ANSI in Unicode, i metodi restituiranno sempre stringhe di formato Unicode. Per riconvertire la stringa di output in ANSI, utilizzare una classe di conversione ATL. Per ulteriori informazioni sulle classi di conversione ATL, vedere Macro di conversione di [stringhe ATL e MFC](reference/string-conversion-macros.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#114](../atl/codesnippet/cpp/programming-with-ccombstr-atl_1.cpp)]

Se si utilizza un valore `CComBSTR` letterale stringa per modificare un oggetto, utilizzare stringhe di caratteri wide. Ciò ridurrà le conversioni non necessarie.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#115](../atl/codesnippet/cpp/programming-with-ccombstr-atl_2.cpp)]

## <a name="scope-issues"></a><a name="programmingwithccombstr_scopeissues"></a>Problemi relativi all'ambito

Come con qualsiasi classe ben `CComBSTR` comportata, libererà le sue risorse quando uscirà dall'ambito. Se una funzione restituisce `CComBSTR` un puntatore alla stringa, ciò può causare problemi, poiché il puntatore farà riferimento alla memoria che è già stata liberata. In questi casi, `Copy` utilizzare il metodo , come illustrato di seguito.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#116](../atl/codesnippet/cpp/programming-with-ccombstr-atl_3.cpp)]

## <a name="explicitly-freeing-the-ccombstr-object"></a><a name="programmingwithccombstr_explicitlyfreeing"></a>Liberare in modo esplicito l'oggetto CComBSTRExplicitly Freeing the CComBSTR Object

È possibile liberare in modo `CComBSTR` esplicito la stringa contenuta nell'oggetto prima che l'oggetto esca dall'ambito. Se la stringa viene `CComBSTR` liberata, l'oggetto non è valido.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#117](../atl/codesnippet/cpp/programming-with-ccombstr-atl_4.cpp)]

## <a name="using-ccombstr-objects-in-loops"></a><a name="programmingwithccombstr_usingloops"></a>Utilizzo di oggetti CComBSTR nei cicliUsing CComBSTR Objects in Loops

Poiché `CComBSTR` la classe alloca un buffer per `+=` eseguire `Append` determinate operazioni, ad esempio l'operatore o il metodo, non è consigliabile eseguire la modifica delle stringhe all'interno di un ciclo stretto. In queste `CStringT` situazioni, fornisce prestazioni migliori.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#118](../atl/codesnippet/cpp/programming-with-ccombstr-atl_5.cpp)]

## <a name="memory-leak-issues"></a><a name="programmingwithccombstr_memoryleaks"></a>Problemi di perdita di memoria

Il passaggio dell'indirizzo di un oggetto inizializzato `CComBSTR` a una funzione come parametro **[out]** causa una perdita di memoria.

Nell'esempio seguente, la stringa allocata per contenere la stringa `"Initialized"` viene persa quando la funzione `MyGoodFunction` sostituisce la stringa.

[!code-cpp[NVC_ATL_Utilities#119](../atl/codesnippet/cpp/programming-with-ccombstr-atl_6.cpp)]

Per evitare la `Empty` perdita, `CComBSTR` chiamare il metodo sugli oggetti esistenti prima di passare l'indirizzo come parametro **[out].**

Si noti che lo stesso codice non causerebbe una perdita se il parametro della funzione fosse **[in, out]**.

## <a name="see-also"></a>Vedere anche

[Concetti](../atl/active-template-library-atl-concepts.md)<br/>
[Classe CStringT](../atl-mfc-shared/reference/cstringt-class.md)<br/>
[wstring](../standard-library/basic-string-class.md)<br/>
[Macro di conversione delle stringhe](../atl/reference/string-conversion-macros.md)
