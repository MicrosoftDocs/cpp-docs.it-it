---
title: Classi DAO | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.data
dev_langs:
- C++
helpviewer_keywords:
- database classes [MFC], DAO
- DAO [MFC], classes
ms.assetid: b15d0cd6-328b-4288-9c19-d037a795db57
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c5af80f7a264a15f24ced0be37102802771dc6f2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46416682"
---
# <a name="dao-classes"></a>Classi DAO

Queste classi funzionano con le altre classi di framework applicazione per fornire accesso facile ai database oggetto DAO (Data Access), che usano lo stesso motore di database come Microsoft Visual Basic e Microsoft Access. Le classi DAO sono accessibili anche un'ampia gamma di database per cui sono disponibili driver Open Database Connectivity (ODBC).

I programmi che usano database DAO avrà almeno una `CDaoDatabase` oggetto e un `CDaoRecordset` oggetto.

> [!NOTE]
>  L'ambiente di Visual C++ e le procedure guidate non supportano più DAO (anche se sono incluse le classi DAO ed è comunque possibile usarli). Microsoft consiglia di utilizzare ODBC per i nuovi progetti MFC. È consigliabile utilizzare solo DAO nella gestione delle applicazioni esistenti.

[CDaoWorkspace](../mfc/reference/cdaoworkspace-class.md)<br/>
Gestisce una sessione di database denominata, protetto da password dall'account di accesso per disconnettersi. La maggior parte dei programmi utilizzare l'area di lavoro predefinita.

[CDaoDatabase](../mfc/reference/cdaodatabase-class.md)<br/>
Una connessione a un database tramite la quale è possibile agire sui dati.

[Classe CDaoRecordset](../mfc/reference/cdaorecordset-class.md)<br/>
Rappresenta un set di record selezionati da un'origine dati.

[CDaoRecordView](../mfc/reference/cdaorecordview-class.md)<br/>
Visualizzazione che mostra i record del database nei controlli.

[CDaoQueryDef](../mfc/reference/cdaoquerydef-class.md)<br/>
Rappresenta una definizione di query, in genere uno salvato in un database.

[CDaoTableDef](../mfc/reference/cdaotabledef-class.md)<br/>
Rappresenta la definizione archiviata di una tabella di base o di una tabella collegata.

[CDaoException](../mfc/reference/cdaoexception-class.md)<br/>
Rappresenta una condizione di eccezione generata da classi DAO.

[CDaoFieldExchange](../mfc/reference/cdaofieldexchange-class.md)<br/>
Supporta le routine DFX DAO (record field exchange) utilizzate dalle classi di database DAO. È in genere non direttamente utilizzerà questa classe.

## <a name="related-classes"></a>Classi correlate

[CLongBinary](../mfc/reference/clongbinary-class.md)<br/>
Incapsula un handle per archiviazione per un oggetto binario di grandi dimensioni (BLOB), ad esempio una bitmap. `CLongBinary` gli oggetti vengono utilizzati per gestire gli oggetti di grandi quantità di dati archiviati nelle tabelle di database.

[COleCurrency](../mfc/reference/colecurrency-class.md)<br/>
Wrapper per il tipo di automazione OLE **valuta**, un tipo aritmetico a virgola fissa, con 15 cifre prima del separatore decimale e 4 cifre dopo.

[COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md)<br/>
Wrapper per il tipo di automazione OLE **data**. Rappresenta valori di data e ora.

[COleVariant](../mfc/reference/colevariant-class.md)<br/>
Wrapper per il tipo di automazione OLE **VARIANT**. I dati in **VARIANT**possono essere archiviati in numerosi formati.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)

