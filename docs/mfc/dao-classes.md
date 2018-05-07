---
title: Classi DAO | Documenti Microsoft
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
ms.openlocfilehash: f43595ca5f688372a70999231ceebec5282cd3b6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="dao-classes"></a>Classi DAO
Queste classi vengono utilizzate con le altre classi di framework applicazione per fornire facile accesso ai database oggetto DAO (Data Access), che utilizzano lo stesso motore di database di Microsoft Visual Basic e Microsoft Access. Le classi DAO accessibile anche un'ampia gamma di database per cui sono disponibili driver Open Database Connectivity (ODBC).  
  
 I programmi che utilizzano database DAO saranno necessario almeno un `CDaoDatabase` oggetto e un `CDaoRecordset` oggetto.  
  
> [!NOTE]
>  L'ambiente di Visual C++ e le procedure guidate non supportano più DAO (anche se sono incluse le classi DAO ed è comunque possibile usarle). Microsoft consiglia di utilizzare ODBC per i nuovi progetti MFC. Utilizzare solo DAO di gestione delle applicazioni esistenti.  
  
 [CDaoWorkspace](../mfc/reference/cdaoworkspace-class.md)  
 Gestisce una sessione di database denominata e protetta da password dall'account di accesso alla disconnessione. La maggior parte dei programmi di utilizzare l'area di lavoro predefinita.  
  
 [CDaoDatabase](../mfc/reference/cdaodatabase-class.md)  
 Una connessione a un database tramite il quale è possibile operare sui dati.  
  
 [CDaoRecordset](../mfc/reference/cdaorecordset-class.md)  
 Rappresenta un set di record selezionati da un'origine dati.  
  
 [CDaoRecordView](../mfc/reference/cdaorecordview-class.md)  
 Visualizzazione che mostra i record del database nei controlli.  
  
 [CDaoQueryDef](../mfc/reference/cdaoquerydef-class.md)  
 Rappresenta una definizione di query, in genere uno salvato in un database.  
  
 [CDaoTableDef](../mfc/reference/cdaotabledef-class.md)  
 Rappresenta la definizione archiviata di una tabella di base o di una tabella collegata.  
  
 [CDaoException](../mfc/reference/cdaoexception-class.md)  
 Rappresenta una condizione di eccezione generata da classi DAO.  
  
 [CDaoFieldExchange](../mfc/reference/cdaofieldexchange-class.md)  
 Supporta le routine DFX DAO (record field exchange) utilizzate dalle classi di database DAO. Viene in genere non utilizzare questa classe direttamente.  
  
## <a name="related-classes"></a>Classi correlate  
 [CLongBinary](../mfc/reference/clongbinary-class.md)  
 Incapsula un handle di archiviazione per un oggetto binario di grandi dimensioni (BLOB), ad esempio una bitmap. `CLongBinary` gli oggetti vengono utilizzati per gestire gli oggetti di grandi quantità di dati archiviati nelle tabelle di database.  
  
 [COleCurrency](../mfc/reference/colecurrency-class.md)  
 Wrapper per il tipo di automazione OLE **valuta**, un tipo aritmetico a virgola fissa, con 15 cifre prima del separatore decimale e 4 cifre dopo.  
  
 [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md)  
 Wrapper per il tipo di automazione OLE **data**. Rappresenta valori di data e ora.  
  
 [COleVariant](../mfc/reference/colevariant-class.md)  
 Wrapper per il tipo di automazione OLE **VARIANT**. Dati in **VARIANT**possono essere archiviati in numerosi formati.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

