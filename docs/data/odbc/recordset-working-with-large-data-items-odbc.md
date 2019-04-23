---
title: 'Recordset: Uso degli elementi di dati di grandi dimensioni (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- BLOB (binary large object), recordsets
- ODBC recordsets, binary large objects
- recordsets, binary large objects
- binary large objects
- CLongBinary class, using in recordsets
ms.assetid: 3e80b5a8-b6e7-43c6-a816-e54befc513a3
ms.openlocfilehash: 3ba8d4af5b0781c425dd3b1223e2208b279f055e
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59033044"
---
# <a name="recordset-working-with-large-data-items-odbc"></a>Recordset: Uso degli elementi di dati di grandi dimensioni (ODBC)

In questo argomento si applica a entrambe le classi ODBC MFC e le classi DAO MFC.

> [!NOTE]
>  Se si usano le classi DAO MFC, gestire gli elementi di dati di grandi dimensioni con la classe [CByteArray](../../mfc/reference/cbytearray-class.md) piuttosto che classe [CLongBinary](../../mfc/reference/clongbinary-class.md). Se si utilizza le classi ODBC MFC con il recupero di righe bulk, utilizzare `CLongBinary` anziché `CByteArray`. Per altre informazioni sul recupero di righe bulk, vedere [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Si supponga che il database consente di archiviare grandi porzioni di dati, ad esempio le bitmap (fotografie dipendente, mappe, immagini dei prodotti, gli oggetti OLE e così via). Questo tipo di dati è noto anche come Binary Large Object (o BLOB) perché:

- Ogni valore del campo è grande.

- A differenza dei numeri e altri tipi di dati semplici, non ha la dimensione prevedibile.

- I dati non hanno alcun formati dalla prospettiva del programma.

Questo argomento viene illustrato quale tipo di supporto forniscono classi di database per l'utilizzo di tali oggetti.

##  <a name="_core_managing_large_objects"></a> La gestione degli oggetti di grandi dimensioni

Recordset sono due modi per risolvere le difficoltà speciali di gestione di oggetti binari di grandi dimensioni. È possibile usare classi [CByteArray](../../mfc/reference/cbytearray-class.md) oppure è possibile usare classi [CLongBinary](../../mfc/reference/clongbinary-class.md). In generale, `CByteArray` è il modo migliore per gestire dati binari di grandi dimensioni.

`CByteArray` richiede un overhead maggiore rispetto a `CLongBinary` ma è più in grado di supportare, come descritto in [classe CByteArray](#_core_the_cbytearray_class). `CLongBinary` viene descritto brevemente nella [classe CLongBinary](#_core_the_clongbinary_class).

Per informazioni dettagliate sull'uso `CByteArray` per lavorare con gli elementi di dati di grandi dimensioni, vedere [Nota tecnica 45](../../mfc/tn045-mfc-database-support-for-long-varchar-varbinary.md).

##  <a name="_core_the_cbytearray_class"></a> CByteArray Class

`CByteArray` è una delle classi collection MFC. Oggetto `CByteArray` oggetto archivia una matrice dinamica di byte, ovvero la matrice può aumentare se necessario. La classe fornisce accesso veloce in base all'indice, come con le matrici C++ predefinite. `CByteArray` gli oggetti possono essere serializzati e il dump per scopi diagnostici. La classe fornisce funzioni membro per il recupero e impostazione byte specificati, inserimento aggiungendo byte e la rimozione di un byte o tutti i byte. Queste funzionalità semplificano l'analisi dei dati binari. Se l'oggetto binario è un oggetto OLE, ad esempio, potrebbe essere necessario eseguire alcuni byte intestazione per raggiungere l'oggetto effettivo.

##  <a name="_core_using_cbytearray_in_recordsets"></a> Utilizzo CByteArray in recordset

Fornendo il tipo di un membro dati del campo del recordset `CByteArray`, è fornire una base da cui fissa [RFX](../../data/odbc/record-field-exchange-rfx.md) può gestire il trasferimento di questi oggetti tra il recordset e l'origine dati e tramite la quale è possibile modificare il dati all'interno dell'oggetto. RFX necessita di un sito specifico per i dati recuperati, ed è necessario un modo per accedere ai dati sottostanti.

Per informazioni dettagliate sull'uso `CByteArray` per lavorare con gli elementi di dati di grandi dimensioni, vedere [Nota tecnica 45](../../mfc/tn045-mfc-database-support-for-long-varchar-varbinary.md).

##  <a name="_core_the_clongbinary_class"></a> CLongBinary (classe)

Oggetto [CLongBinary](../../mfc/reference/clongbinary-class.md) oggetto è un semplice contenitore un `HGLOBAL` handle per un blocco di memoria allocata nell'heap. Quando associa una colonna della tabella che contiene un oggetto binario di grandi dimensioni, RFX alloca il `HGLOBAL` gestire quando necessarie trasferire i dati per il recordset e archivia l'handle nel `CLongBinary` campo del set di record.

A sua volta, si utilizza il `HGLOBAL` gestire, `m_hData`, per lavorare con i dati stessi, è in uno qualsiasi gestirà i dati. Si tratta di where [CByteArray](../../mfc/reference/cbytearray-class.md) aggiunge funzionalità.

> [!CAUTION]
>  CLongBinary oggetti non possono essere usati come parametri nelle chiamate di funzione. Inoltre, l'implementazione, che chiama `::SQLGetData`, necessariamente rallenta le prestazioni di scorrimento per uno snapshot che è possibile scorrere. Questo potrebbe anche essere vero quando si usa un `::SQLGetData` chiamare manualmente per recuperare le colonne dello schema dinamico.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: Recupero di somme e altri risultati aggregati (ODBC)](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md)<br/>
[Trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)