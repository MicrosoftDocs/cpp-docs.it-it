---
title: Gestione dei dati di tipo stringa
ms.date: 11/04/2016
helpviewer_keywords:
- Unicode, string objects
ms.assetid: 0b53a542-eeb1-4108-9ada-6700645b6f8f
ms.openlocfilehash: b247e97f5aa6b5e85a6a6b6f57a64224a9e0f435
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62252662"
---
# <a name="string-data-management"></a>Gestione dei dati di tipo stringa

Visual C++ fornisce diversi modi per gestire dati di tipo stringa:

- [Modifica di stringhe](../c-runtime-library/string-manipulation-crt.md) per l'uso di stringhe in formato C con terminazione null

- Funzioni API Win32 per la gestione delle stringhe

- La classe MFC [classe CStringT](../atl-mfc-shared/reference/cstringt-class.md), che fornisce oggetti stringa flessibile e ridimensionabile

- Classe [classe CStringT](../atl-mfc-shared/reference/cstringt-class.md), che fornisce un oggetto stringa indipendente da MFC con la stessa funzionalità `CString`

Quasi tutti i programmi di lavorare con dati di tipo stringa. MFC `CString` classe è spesso la soluzione migliore per la gestione delle stringhe flessibili. A partire dalla versione 7.0, `CString` è utilizzabile in programmi MFC o indipendente da MFC. Sia la libreria run-time e `CString` supportano le stringhe contenenti caratteri multibyte (wide), come la programmazione MBCS o Unicode.

Questo articolo descrive i servizi per utilizzo generico che fornisce la libreria di classi correlate alla modifica delle stringhe. Gli argomenti trattati in questo articolo includono:

- [Portabilità di Unicode e MBCS fornire](#_core_unicode_and_mbcs_provide_portability)

- [Oggetti CString e puntatori const char](#_core_cstrings_and_const_char_pointers)

- [Il conteggio dei riferimenti di CString](#_core_cstring_reference_counting)

Il [classe CStringT](../atl-mfc-shared/reference/cstringt-class.md) classe offre supporto per la gestione delle stringhe. Consente di sostituire ed estendere le funzionalità in genere fornita dal pacchetto di stringa della libreria di runtime C. Il `CString` classe fornisce funzioni membro e gli operatori per la gestione semplificata delle stringhe, simili a quelle disponibili in Basic. La classe fornisce anche i costruttori e operatori per la creazione, assegnazione e il confronto `CString`tipi di dati di stringa C++ standard e s. In quanto `CString` non è derivato da `CObject`, è possibile usare `CString` oggetti indipendentemente dalla maggior parte di Microsoft Foundation classe libreria (MFC).

`CString` gli oggetti seguono "semantica dei valori". Oggetto `CString` oggetto rappresenta un valore univoco. Può essere considerata un `CString` sotto forma di stringa effettivo, non come un puntatore a una stringa.

Oggetto `CString` oggetto rappresenta una sequenza di un numero variabile di caratteri. `CString` gli oggetti possono essere considerati come matrici di caratteri.

##  <a name="_core_unicode_and_mbcs_provide_portability"></a> Unicode e MBCS offrire portabilità

Con MFC versione 3.0 e versioni successive, MFC, tra cui `CString`, è abilitata per Unicode e set di caratteri multibyte (MBCS). Questo supporto rende più semplice per scrivere applicazioni portabili che è possibile creare per i caratteri Unicode o ANSI. Per abilitare questa portabilità, ogni carattere in un `CString` oggetto è di tipo TCHAR, che viene definito come `wchar_t` se si definisce il simbolo Unicode quando si compila l'applicazione o come `char` in caso contrario. Oggetto `wchar_t` carattere è con ampiezza 16 bit. Il formato MBCS è abilitato se si compila con MBCS definito. Libreria MFC viene compilato con il simbolo _ MBCS (per le librerie NAFX) o il simbolo di Unicode (per le librerie UAFX) definito.

> [!NOTE]
>  Il `CString` esempi di questo e gli articoli associati sulle stringhe mostrano stringhe di valore letterale formattate correttamente per la portabilità di Unicode, utilizzando la macro t fa sì che converte la stringa letterale al form:

`L"literal string"`

> [!NOTE]
>  che il compilatore considera come una stringa Unicode. Ad esempio, il seguente codice:

[!code-cpp[NVC_ATLMFC_Utilities#187](../atl-mfc-shared/codesnippet/cpp/string-data-management_1.cpp)]

> [!NOTE]
>  viene convertito come stringa Unicode se è definito Unicode o come se non una stringa ANSI. Per altre informazioni, vedere l'articolo [supporto Unicode e Set di caratteri Multibyte (MBCS)](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md).

Oggetto `CString` oggetto possibile memorizzare fino ai caratteri INT_MAX (2,147,483,647). Il tipo di dati TCHAR consente di ottenere o impostare i singoli caratteri all'interno di un `CString` oggetto. A differenza delle matrici di caratteri, di `CString` classe è una funzionalità di allocazione di memoria interna. In questo modo `CString` gli oggetti di aumentare automaticamente in base alle esigenze (vale a dire, non è necessario preoccuparsi di aumento delle dimensioni una `CString` oggetto in base alle stringhe più lunghe).

##  <a name="_core_cstrings_and_const_char_pointers"></a> Oggetti CString e puntatori const char

Oggetto `CString` oggetto può anche agire come una valore letterale stringa in formato C (una `PCXSTR`, che è la stessa **char const** <strong>\*</strong> se non in modalità Unicode). Il [CSimpleStringT::operator PCXSTR](../atl-mfc-shared/reference/csimplestringt-class.md#operator_pcxstr) consente l'operatore di conversione `CString` oggetti deve essere liberamente sostituito da puntatori a caratteri nelle chiamate di funzione. Il **CString (LPCWSTR** `pszSrc` **)** costruttore consente di puntatori a caratteri deve essere sostituito da `CString` oggetti.

Non viene effettuato alcun tentativo di riduzione `CString` oggetti. Se si apportano due `CString` gli oggetti che contiene `Chicago`, ad esempio, i caratteri in `Chicago` vengono archiviati in due posizioni. (Ciò potrebbe non essere nelle versioni future di MFC, pertanto è consigliabile non dipendono da esso.)

> [!NOTE]
>  Usare la [CSimpleStringT::GetBuffer](../atl-mfc-shared/reference/csimplestringt-class.md#getbuffer) e [CSimpleStringT::ReleaseBuffer](../atl-mfc-shared/reference/csimplestringt-class.md#releasebuffer) funzioni membro quando è necessario accedere direttamente a un `CString` come puntatore a un carattere non costante.

> [!NOTE]
>  Usare la [CStringT::AllocSysString](../atl-mfc-shared/reference/cstringt-class.md#allocsysstring) e [CStringT::SetSysString](../atl-mfc-shared/reference/cstringt-class.md#setsysstring) funzioni membro per allocare e impostare gli oggetti di tipo BSTR usati in automazione (precedentemente noto come automazione OLE).

> [!NOTE]
>  Dove possibile, allocare `CString` oggetti sulla cornice invece che sull'heap. In questo potrai risparmiare memoria e semplifica il passaggio di parametri.

Il `CString` classe non viene implementata come una classe di raccolta libreria Microsoft Foundation Class, tuttavia `CString` oggetti certamente possono essere archiviati come elementi nelle raccolte.

##  <a name="_core_cstring_reference_counting"></a> Il conteggio dei riferimenti di CString

A partire dalla versione 4.0, MFC quando [classe CStringT](../atl-mfc-shared/reference/cstringt-class.md) gli oggetti vengono copiati, MFC con incrementi di un conteggio dei riferimenti, anziché copiare i dati. In questo modo di passaggio di parametri di valore e restituendo `CString` oggetti dal valore più efficiente. Tali operazioni implicano il costruttore di copia da chiamare, in alcuni casi più volte. Incrementare un conteggio dei riferimenti consente di ridurre l'overhead per le operazioni comuni e rende l'utilizzo `CString` un'opzione più interessante.

Poiché ogni copia viene eliminato definitivamente, il conteggio dei riferimenti nell'oggetto originale viene decrementato. Originale `CString` oggetto non viene eliminato fino a quando il conteggio dei riferimenti viene ridotto a zero.

È possibile usare la `CString` funzioni membro [CSimpleStringT::LockBuffer](../atl-mfc-shared/reference/csimplestringt-class.md#lockbuffer) e [CSimpleStringT::UnlockBuffer](../atl-mfc-shared/reference/csimplestringt-class.md#unlockbuffer) per disabilitare o abilitare il conteggio dei riferimenti.

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](../mfc/general-mfc-topics.md)
