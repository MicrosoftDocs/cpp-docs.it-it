---
description: 'Altre informazioni su: classi di tipi di dati semplici'
title: Classi del tipo di dati semplice
ms.date: 11/04/2016
f1_keywords:
- vc.classes.data
helpviewer_keywords:
- scalar classes [MFC]
- data classes [MFC]
- simple data type classes [MFC]
ms.assetid: 0d591d68-0a33-49e9-8a6d-90c90de5c16a
ms.openlocfilehash: 4ce6e799cc30dddde18a50802e01c872c54d1d3a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216964"
---
# <a name="simple-data-type-classes"></a>Classi del tipo di dati semplice

Le classi seguenti incapsulano coordinate di disegno, stringhe di caratteri e informazioni di data e ora che consentono un utilizzo conveniente della sintassi di C++. Questi oggetti vengono utilizzati ampiamente come parametri alle funzioni membro delle classi di Windows nella libreria di classi. Poiché `CPoint` , `CSize` e `CRect` corrispondono rispettivamente alle strutture **Point**, **size** e **Rect** nell'Windows SDK, è possibile usare gli oggetti di queste classi C++ laddove è possibile usare queste strutture in linguaggio C. Le classi forniscono utili interfacce attraverso le funzioni membro. `CStringT` fornisce stringhe di caratteri dinamiche molto flessibili. `CTime`, `COleDateTime` , `CTimeSpan` e `COleTimeSpan` rappresentano valori di data e ora. Per ulteriori informazioni su queste classi, vedere l'articolo relativo a [data e ora](../atl-mfc-shared/date-and-time.md).

Le classi che iniziano con " `COle` " sono incapsulamenti dei tipi di dati forniti da OLE. Questi tipi di dati possono essere utilizzati in programmi di Windows indipendentemente dall'utilizzo di altre funzionalità OLE.

[CStringt (classe)](../atl-mfc-shared/reference/cstringt-class.md)<br/>
Contiene stringhe di caratteri.

[CTime](../atl-mfc-shared/reference/ctime-class.md)<br/>
Contiene valori assoluti di data e ora.

[COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md)<br/>
Wrapper per la **Data** del tipo di automazione OLE. Rappresenta valori di data e ora.

[CTimeSpan](../atl-mfc-shared/reference/ctimespan-class.md)<br/>
Contiene valori relativi di data e ora.

[COleDateTimeSpan](../atl-mfc-shared/reference/coledatetimespan-class.md)<br/>
Contiene valori relativi di `COleDateTime`, come ad esempio la differenza tra due valori `COleDateTime`.

[CPoint](../atl-mfc-shared/reference/cpoint-class.md)<br/>
Contiene coppie di coordinate (x, y).

[CSize](../atl-mfc-shared/reference/csize-class.md)<br/>
Contiene distanze, posizioni relative o valori accoppiati.

[CRect](../atl-mfc-shared/reference/crect-class.md)<br/>
Contiene le coordinate delle aree rettangolari.

[CImageList](../mfc/reference/cimagelist-class.md)<br/>
Fornisce la funzionalità dell'elenco immagini di Windows. Gli elenchi immagini vengono usati con controlli elenco e controlli albero. Possono inoltre essere utilizzati per memorizzare e archiviare un set di immagini bitmap della stessa dimensione.

[COleVariant](../mfc/reference/colevariant-class.md)<br/>
Wrapper per la **variante** del tipo di automazione OLE. I dati nei **Variant** possono essere archiviati in molti formati.

[COleCurrency](../mfc/reference/colecurrency-class.md)<br/>
Wrapper per la **valuta** del tipo di automazione OLE, un tipo aritmetico a virgola fissa, con 15 cifre prima del separatore decimale e 4 cifre dopo.

> [!NOTE]
> `CRect`, `CSize` e `CPoint` sono utilizzabili nelle applicazioni ATL o MFC. Inoltre, `CStringT` fornisce una classe simile a MFC `CString` . Per altre informazioni sulle classi di utilità condivise, vedere [classi condivise](../atl-mfc-shared/atl-mfc-shared-classes.md).

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../mfc/class-library-overview.md)
