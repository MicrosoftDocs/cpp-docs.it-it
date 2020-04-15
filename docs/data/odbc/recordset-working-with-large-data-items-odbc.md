---
title: 'Recordset: gestione di dati di grandi dimensioni (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- BLOB (binary large object), recordsets
- ODBC recordsets, binary large objects
- recordsets, binary large objects
- binary large objects
- CLongBinary class, using in recordsets
ms.assetid: 3e80b5a8-b6e7-43c6-a816-e54befc513a3
ms.openlocfilehash: 872fa7229738314b86b6ae6c0d5dc5a5562b27f1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81360610"
---
# <a name="recordset-working-with-large-data-items-odbc"></a>Recordset: gestione di dati di grandi dimensioni (ODBC)

Questo argomento si applica sia alle classi ODBC MFC che alle classi DAO MFC.

> [!NOTE]
> Se si utilizzano le classi DAO MFC, gestire gli elementi di dati di grandi dimensioni con la classe [CByteArray](../../mfc/reference/cbytearray-class.md) anziché con la classe [CLongBinary](../../mfc/reference/clongbinary-class.md). Se si utilizzano le classi ODBC MFC `CLongBinary` con `CByteArray`il recupero di massa di righe, utilizzare anziché . Per ulteriori informazioni sul recupero di massa di righe, vedere Recordset: recupero di massa di [record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Si supponga che il database possa archiviare grandi quantità di dati, ad esempio bitmap (fotografie dei dipendenti, mappe, immagini di prodotti, oggetti OLE e così via). Questo tipo di dati viene spesso definito oggetto binario di grandi dimensioni (o BLOB) perché:This kind of data is often referred to as a Binary Large Object (o BLOB) because:

- Ogni valore di campo è grande.

- A differenza dei numeri e di altri tipi di dati semplici, non ha dimensioni prevedibili.

- I dati sono privi di forma dal punto di vista del programma.

In questo argomento viene illustrato il supporto fornito dalle classi di database per l'utilizzo di tali oggetti.

## <a name="managing-large-objects"></a><a name="_core_managing_large_objects"></a>Gestione di oggetti di grandi dimensioni

I recordset sono disponibili in due modi per risolvere la particolare difficoltà di gestione di oggetti binari di grandi dimensioni. È possibile utilizzare la classe [CByteArray](../../mfc/reference/cbytearray-class.md) oppure la classe [CLongBinary](../../mfc/reference/clongbinary-class.md). In generale, `CByteArray` è il modo preferito per gestire dati binari di grandi dimensioni.

`CByteArray`richiede un `CLongBinary` sovraccarico maggiore rispetto a ma è più capace, come descritto nella [classe CByteArray](#_core_the_cbytearray_class). `CLongBinary`è descritto brevemente nella [classe CLongBinary](#_core_the_clongbinary_class).

Per informazioni dettagliate `CByteArray` sull'utilizzo di elementi di dati di grandi dimensioni, vedere [la Nota tecnica 45](../../mfc/tn045-mfc-database-support-for-long-varchar-varbinary.md).

## <a name="cbytearray-class"></a><a name="_core_the_cbytearray_class"></a>CByteArray (classe)

`CByteArray`è una delle classi di raccolte MFC. Un `CByteArray` oggetto archivia una matrice dinamica di byte: l'array può aumentare se necessario. La classe fornisce un accesso rapido in base all'indice, come con le matrici incorporate di C. `CByteArray`gli oggetti possono essere serializzati e sottoposti a dump a scopo diagnostico. La classe fornisce funzioni membro per ottenere e impostare i byte specificati, inserire e accodare byte e rimuovere uno o tutti i byte. Queste funzionalità semplificano l'analisi dei dati binari. Ad esempio, se l'oggetto binario è un oggetto OLE, potrebbe essere necessario utilizzare alcuni byte di intestazione per raggiungere l'oggetto effettivo.

## <a name="using-cbytearray-in-recordsets"></a><a name="_core_using_cbytearray_in_recordsets"></a>Utilizzo di CByteArray in recordsetUsing CByteArray in Recordsets

Assegnando al recordset un membro `CByteArray`dati di campo del recordset , si fornisce una base fissa da cui [RFX](../../data/odbc/record-field-exchange-rfx.md) può gestire il trasferimento di tale oggetto tra il recordset e l'origine dati e tramite il quale è possibile modificare i dati all'interno dell'oggetto. RFX necessita di un sito specifico per i dati recuperati ed è necessario un modo per accedere ai dati sottostanti.

Per informazioni dettagliate `CByteArray` sull'utilizzo di elementi di dati di grandi dimensioni, vedere [la Nota tecnica 45](../../mfc/tn045-mfc-database-support-for-long-varchar-varbinary.md).

## <a name="clongbinary-class"></a><a name="_core_the_clongbinary_class"></a>Classe CLongBinary

Oggetto [CLongBinary](../../mfc/reference/clongbinary-class.md) oggetto è una `HGLOBAL` shell semplice intorno a un handle a un blocco di archiviazione allocata nell'heap. Quando associa una colonna di tabella contenente un oggetto `HGLOBAL` binario di grandi dimensioni, RFX alloca l'handle quando è necessario trasferire i dati al recordset e archivia l'handle nel `CLongBinary` campo del recordset.

A sua volta, `HGLOBAL` si `m_hData`utilizza l'handle, , per lavorare con i dati stessi, operando su di esso come si farebbe su qualsiasi dato di gestione. Si tratta in cui [CByteArray](../../mfc/reference/cbytearray-class.md) aggiunge funzionalità.

> [!CAUTION]
> Gli oggetti CLongBinary non possono essere utilizzati come parametri nelle chiamate di funzione. Inoltre, la loro implementazione, che chiama `::SQLGetData`, rallenta necessariamente le prestazioni di scorrimento per uno snapshot scorrevole. Ciò potrebbe essere vero `::SQLGetData` anche quando si utilizza una chiamata manualmente per recuperare le colonne dello schema dinamico.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: recupero di somme e altri risultati aggregati (ODBC)](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md)<br/>
[Scambio di campi record (RFX)](../../data/odbc/record-field-exchange-rfx.md)
