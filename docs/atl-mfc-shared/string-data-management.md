---
title: Gestione dei dati di tipo stringa
ms.date: 11/04/2016
helpviewer_keywords:
- Unicode, string objects
ms.assetid: 0b53a542-eeb1-4108-9ada-6700645b6f8f
ms.openlocfilehash: 2da8967effeb6ff439cf5b3cece31f63ee77a761
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219040"
---
# <a name="string-data-management"></a>Gestione dei dati di tipo stringa

Visual C++ offre diversi modi per gestire i dati di stringa:

- [Manipolazione di stringhe](../c-runtime-library/string-manipulation-crt.md) per l'utilizzo di stringhe con terminazione null di tipo C

- Funzioni API Win32 per la gestione delle stringhe

- Classe [CStringT](../atl-mfc-shared/reference/cstringt-class.md)della classe MFC, che fornisce oggetti stringa flessibili e ridimensionabili

- Classe [CStringT](../atl-mfc-shared/reference/cstringt-class.md), che fornisce un oggetto stringa indipendente da MFC con la stessa funzionalità di`CString`

Quasi tutti i programmi funzionano con dati di stringa. `CString`La classe MFC è spesso la soluzione migliore per la gestione flessibile delle stringhe. A partire dalla versione 7,0, `CString` può essere utilizzato in programmi MFC o indipendenti da MFC. Sia la libreria di Runtime sia le `CString` stringhe di supporto che contengono caratteri multibyte (Wide), come nella programmazione Unicode o MBCS.

Questo articolo descrive i servizi generici forniti dalla libreria di classi correlati alla manipolazione delle stringhe. Gli argomenti trattati in questo articolo includono:

- [Unicode e MBCS forniscono la portabilità](#_core_unicode_and_mbcs_provide_portability)

- [Gli CString e i puntatori char const](#_core_cstrings_and_const_char_pointers)

- [Conteggio riferimenti CString](#_core_cstring_reference_counting)

La classe [CStringT](../atl-mfc-shared/reference/cstringt-class.md) classe fornisce supporto per la modifica delle stringhe. È progettato per sostituire ed estendere la funzionalità fornita normalmente dal pacchetto di stringhe della libreria di runtime C. La `CString` classe fornisce funzioni membro e operatori per la gestione semplificata delle stringhe, simili a quelle disponibili in base. La classe fornisce inoltre costruttori e operatori per la costruzione, l'assegnazione e il confronto di `CString` s e dei tipi di dati stringa C++ standard. Poiché `CString` non è derivato da `CObject` , è possibile utilizzare `CString` gli oggetti indipendentemente dalla maggior parte dei libreria Microsoft Foundation Class (MFC).

`CString`gli oggetti seguono "semantica del valore". Un `CString` oggetto rappresenta un valore univoco. Si pensi a `CString` come stringa effettiva, non come puntatore a una stringa.

Un `CString` oggetto rappresenta una sequenza di un numero di caratteri variabile. `CString`gli oggetti possono essere considerati come matrici di caratteri.

## <a name="unicode-and-mbcs-provide-portability"></a><a name="_core_unicode_and_mbcs_provide_portability"></a>Unicode e MBCS forniscono la portabilità

Con MFC versione 3,0 e successive, MFC, incluso `CString` , è abilitato per i set di caratteri Unicode e multibyte (MBCS). Questo supporto semplifica la scrittura di applicazioni portabili che possono essere compilate per i caratteri Unicode o ANSI. Per abilitare questa portabilità, ogni carattere in un `CString` oggetto è di tipo TCHAR, che viene definito come **`wchar_t`** se si definisce il simbolo _UNICODE quando si compila l'applicazione o come in **`char`** caso contrario. Un **`wchar_t`** carattere è A 16 bit. MBCS è abilitato se si compila con il simbolo _MBCS definito. MFC viene compilato con il simbolo di _MBCS (per le librerie NAFX) o il simbolo di _UNICODE (per le librerie UAFX) definito.

> [!NOTE]
> Gli `CString` esempi in questo e negli articoli allegati sulle stringhe mostrano stringhe letterali correttamente formattate per la portabilità Unicode, usando la macro _T, che converte la stringa letterale nel formato:

`L"literal string"`

> [!NOTE]
> il compilatore considera come stringa Unicode. Ad esempio, il seguente codice:

[!code-cpp[NVC_ATLMFC_Utilities#187](../atl-mfc-shared/codesnippet/cpp/string-data-management_1.cpp)]

> [!NOTE]
> viene convertito come stringa Unicode se _UNICODE è definito o come stringa ANSI in caso contrario. Per ulteriori informazioni, vedere l'articolo [supporto per Unicode e set di caratteri multibyte (MBCS)](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md).

Un `CString` oggetto può archiviare fino a INT_MAX (2.147.483.647) caratteri. Il tipo di dati TCHAR viene utilizzato per ottenere o impostare singoli caratteri all'interno di un `CString` oggetto. Diversamente dalle matrici di caratteri, la `CString` classe dispone di una funzionalità di allocazione della memoria incorporata. Ciò consente `CString` di aumentare automaticamente le dimensioni degli oggetti in base alle esigenze, ovvero non è necessario preoccuparsi di espandere un `CString` oggetto per adattarlo a stringhe più lunghe.

## <a name="cstrings-and-const-char-pointers"></a><a name="_core_cstrings_and_const_char_pointers"></a>Gli CString e i puntatori char const

Un `CString` oggetto può anche fungere da stringa letterale di tipo C (un oggetto `PCXSTR` , che corrisponde a **const char** <strong>\*</strong> se non è in formato Unicode). L'operatore di conversione [CSimpleStringT:: operator PCXSTR](../atl-mfc-shared/reference/csimplestringt-class.md#operator_pcxstr) consente `CString` di sostituire liberamente gli oggetti per i puntatori a caratteri nelle chiamate di funzione. Il costruttore **CString (LPCWSTR** `pszSrc` **)** consente ai puntatori a caratteri di sostituire `CString` gli oggetti.

Non viene effettuato alcun tentativo di ripiegare `CString` gli oggetti. Se si fanno due `CString` oggetti contenenti `Chicago` , ad esempio, i caratteri in `Chicago` vengono archiviati in due posizioni. (Questo potrebbe non essere vero per le versioni future di MFC, quindi è consigliabile non dipendere da esso).

> [!NOTE]
> Usare le funzioni membro [CSimpleStringT:: GetBuffer](../atl-mfc-shared/reference/csimplestringt-class.md#getbuffer) e [CSimpleStringT:: ReleaseBuffer](../atl-mfc-shared/reference/csimplestringt-class.md#releasebuffer) quando è necessario accedere direttamente a un oggetto `CString` come puntatore non costante a un carattere.

> [!NOTE]
> Usare le funzioni membro [CStringT:: AllocSysString](../atl-mfc-shared/reference/cstringt-class.md#allocsysstring) e [CStringT:: SetSysString](../atl-mfc-shared/reference/cstringt-class.md#setsysstring) per allocare e impostare gli oggetti BSTR usati in automazione (noto in precedenza come automazione OLE).

> [!NOTE]
> Laddove possibile, allocare `CString` gli oggetti nel frame anziché nell'heap. Questa operazione consente di risparmiare memoria e semplifica il passaggio di parametri.

La `CString` classe non viene implementata come classe di raccolta libreria Microsoft Foundation Class, ma `CString` gli oggetti possono certamente essere archiviati come elementi nelle raccolte.

## <a name="cstring-reference-counting"></a><a name="_core_cstring_reference_counting"></a>Conteggio riferimenti CString

A partire dalla versione 4,0 di MFC, quando vengono copiati gli oggetti [classe CStringT](../atl-mfc-shared/reference/cstringt-class.md) , MFC incrementa un conteggio dei riferimenti anziché copiare i dati. In questo modo, i parametri vengono passati per valore e la restituzione `CString` di oggetti per valore è più efficiente. Queste operazioni causano la chiamata del costruttore di copia, talvolta più di una volta. L'incremento di un conteggio dei riferimenti riduce il sovraccarico per queste operazioni comuni e rende `CString` l'uso di un'opzione più interessante.

Poiché ogni copia viene distrutta, il conteggio dei riferimenti nell'oggetto originale viene decrementato. L' `CString` oggetto originale non viene eliminato definitivamente finché il conteggio dei riferimenti non viene ridotto a zero.

È possibile utilizzare le `CString` funzioni membro [CSimpleStringT:: LockBuffer](../atl-mfc-shared/reference/csimplestringt-class.md#lockbuffer) e [CSimpleStringT:: UnlockBuffer](../atl-mfc-shared/reference/csimplestringt-class.md#unlockbuffer) per disabilitare o abilitare il conteggio dei riferimenti.

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](../mfc/general-mfc-topics.md)
