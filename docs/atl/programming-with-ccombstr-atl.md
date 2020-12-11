---
description: 'Altre informazioni su: programmazione con CComBSTR (ATL)'
title: Programmazione con CComBSTR (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- CComBSTR class, programming with
- Unicode, using CComBSTR [ATL]
ms.assetid: d3bd0851-d132-4be9-9c4c-6ccba17acb2b
ms.openlocfilehash: 6c348d703aeaeba40f1f47b8f6fd0ee858b7babd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97159219"
---
# <a name="programming-with-ccombstr-atl"></a>Programmazione con CComBSTR (ATL)

La classe ATL [CComBSTR](../atl/reference/ccombstr-class.md) fornisce un wrapper per il tipo di dati BSTR. Sebbene `CComBSTR` sia uno strumento utile, è necessario prestare attenzione a diverse situazioni.

- [Problemi di conversione](#programmingwithccombstr_conversionissues)

- [Problemi di ambito](#programmingwithccombstr_scopeissues)

- [Liberare in modo esplicito l'oggetto CComBSTR](#programmingwithccombstr_explicitlyfreeing)

- [Uso di oggetti CComBSTR nei cicli](#programmingwithccombstr_usingloops)

- [Problemi di perdita di memoria](#programmingwithccombstr_memoryleaks)

## <a name="conversion-issues"></a><a name="programmingwithccombstr_conversionissues"></a> Problemi di conversione

Sebbene diversi `CComBSTR` Metodi convertano automaticamente un argomento stringa ANSI in Unicode, i metodi restituiscono sempre stringhe di formato Unicode. Per convertire di nuovo la stringa di output in ANSI, utilizzare una classe di conversione ATL. Per ulteriori informazioni sulle classi di conversione ATL, vedere le [macro di conversione di stringhe ATL e MFC](reference/string-conversion-macros.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#114](../atl/codesnippet/cpp/programming-with-ccombstr-atl_1.cpp)]

Se si usa un valore letterale stringa per modificare un `CComBSTR` oggetto, usare stringhe di caratteri wide. Questa operazione ridurrà le conversioni non necessarie.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#115](../atl/codesnippet/cpp/programming-with-ccombstr-atl_2.cpp)]

## <a name="scope-issues"></a><a name="programmingwithccombstr_scopeissues"></a> Problemi di ambito

Così come con qualsiasi classe correttamente comportata, le `CComBSTR` risorse vengono liberate quando esce dall'ambito. Se una funzione restituisce un puntatore alla `CComBSTR` stringa, è possibile che si verifichino problemi perché il puntatore farà riferimento a memoria che è già stata liberata. In questi casi, usare il `Copy` metodo, come illustrato di seguito.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#116](../atl/codesnippet/cpp/programming-with-ccombstr-atl_3.cpp)]

## <a name="explicitly-freeing-the-ccombstr-object"></a><a name="programmingwithccombstr_explicitlyfreeing"></a> Liberare in modo esplicito l'oggetto CComBSTR

È possibile liberare in modo esplicito la stringa contenuta nell' `CComBSTR` oggetto prima che l'oggetto esca dall'ambito. Se la stringa viene liberata, l' `CComBSTR` oggetto non è valido.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#117](../atl/codesnippet/cpp/programming-with-ccombstr-atl_4.cpp)]

## <a name="using-ccombstr-objects-in-loops"></a><a name="programmingwithccombstr_usingloops"></a> Uso di oggetti CComBSTR nei cicli

Poiché la `CComBSTR` classe alloca un buffer per eseguire determinate operazioni, ad esempio l' `+=` operatore o il `Append` metodo, non è consigliabile eseguire la manipolazione delle stringhe all'interno di un ciclo limitato. In queste situazioni, `CStringT` fornisce prestazioni migliori.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#118](../atl/codesnippet/cpp/programming-with-ccombstr-atl_5.cpp)]

## <a name="memory-leak-issues"></a><a name="programmingwithccombstr_memoryleaks"></a> Problemi di perdita di memoria

Il passaggio dell'indirizzo di un oggetto inizializzato `CComBSTR` a una funzione come parametro **[out]** causa una perdita di memoria.

Nell'esempio seguente la stringa allocata per conservare la stringa `"Initialized"` viene persa quando la funzione `MyGoodFunction` sostituisce la stringa.

[!code-cpp[NVC_ATL_Utilities#119](../atl/codesnippet/cpp/programming-with-ccombstr-atl_6.cpp)]

Per evitare la perdita, chiamare il `Empty` Metodo sugli `CComBSTR` oggetti esistenti prima di passare l'indirizzo come parametro **[out]** .

Si noti che lo stesso codice non provocherebbe una perdita se il parametro della funzione era **[in, out]**.

## <a name="see-also"></a>Vedi anche

[Concetti](../atl/active-template-library-atl-concepts.md)<br/>
[CStringt (classe)](../atl-mfc-shared/reference/cstringt-class.md)<br/>
[wstring](../standard-library/basic-string-class.md)<br/>
[Macro di conversione di stringhe](../atl/reference/string-conversion-macros.md)
