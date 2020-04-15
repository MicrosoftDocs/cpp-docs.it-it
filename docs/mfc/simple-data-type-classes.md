---
title: Classi del tipo di dati semplice
ms.date: 11/04/2016
f1_keywords:
- vc.classes.data
helpviewer_keywords:
- scalar classes [MFC]
- data classes [MFC]
- simple data type classes [MFC]
ms.assetid: 0d591d68-0a33-49e9-8a6d-90c90de5c16a
ms.openlocfilehash: d4038334e35b734370a437d35519498b96c00770
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365408"
---
# <a name="simple-data-type-classes"></a>Classi del tipo di dati semplice

Le classi seguenti incapsulano coordinate di disegno, stringhe di caratteri e informazioni di data e ora che consentono un utilizzo conveniente della sintassi di C++. Questi oggetti vengono utilizzati ampiamente come parametri alle funzioni membro delle classi di Windows nella libreria di classi. `CPoint`Poiché `CSize`, `CRect` e corrispondono rispettivamente alle strutture **POINT**, **SI**e **RECT,** in Windows SDK, è possibile utilizzare gli oggetti di queste classi C , ovunque sia possibile utilizzare queste strutture del linguaggio C. Le classi forniscono utili interfacce attraverso le funzioni membro. `CStringT` fornisce stringhe di caratteri dinamiche molto flessibili. `CTime`, `COleDateTime` `CTimeSpan`, `COleTimeSpan` e rappresentano valori di data e ora. Per ulteriori informazioni su queste classi, vedere l'articolo [Data e ora](../atl-mfc-shared/date-and-time.md).

Le classi che`COle`iniziano con " " sono incapsulamenti di tipi di dati forniti da OLE. Questi tipi di dati possono essere utilizzati in programmi di Windows indipendentemente dall'utilizzo di altre funzionalità OLE.

[Classe CStringT](../atl-mfc-shared/reference/cstringt-class.md)<br/>
Contiene stringhe di caratteri.

[Ctime](../atl-mfc-shared/reference/ctime-class.md)<br/>
Contiene valori assoluti di data e ora.

[COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md)<br/>
Wrapper per il tipo di automazione OLE **DATE**. Rappresenta valori di data e ora.

[CTimeSpan](../atl-mfc-shared/reference/ctimespan-class.md)<br/>
Contiene valori relativi di data e ora.

[Coledatetimespan](../atl-mfc-shared/reference/coledatetimespan-class.md)<br/>
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
Wrapper per il tipo di automazione OLE **VARIANT**. I dati in **VARIANT**s possono essere memorizzati in molti formati.

[COleCurrency](../mfc/reference/colecurrency-class.md)<br/>
Wrapper per il tipo di automazione OLE **CURRENCY**, un tipo aritmetico a virgola fissa, con 15 cifre prima del separatore decimale e 4 cifre dopo.

> [!NOTE]
> `CRect`, `CSize`e `CPoint` sono utilizzabili nelle applicazioni ATL o MFC. Fornisce inoltre `CStringT` una classe `CString`di tipo MFC indipendente. Per ulteriori informazioni sulle classi di utilità condivise, vedere [Classi condivise](../atl-mfc-shared/atl-mfc-shared-classes.md).

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../mfc/class-library-overview.md)
