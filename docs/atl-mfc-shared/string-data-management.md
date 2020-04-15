---
title: Gestione dei dati di tipo stringa
ms.date: 11/04/2016
helpviewer_keywords:
- Unicode, string objects
ms.assetid: 0b53a542-eeb1-4108-9ada-6700645b6f8f
ms.openlocfilehash: 7f92b38ac659faef2dd9319b2f204ba837f0d473
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317459"
---
# <a name="string-data-management"></a>Gestione dei dati di tipo stringa

Per gestire i dati di tipo stringa, in Visual Cè sono disponibili diversi modi:

- [Manipolazione delle stringhe](../c-runtime-library/string-manipulation-crt.md) per l'utilizzo di stringhe con terminazione null di tipo CString Manipulation for working with C-style null-terminated strings

- Funzioni API Win32 per la gestione delle stringhe

- Classe [CStringT](../atl-mfc-shared/reference/cstringt-class.md)di MFC , che fornisce oggetti stringa flessibili e ridimensionabili

- Classe [CStringT](../atl-mfc-shared/reference/cstringt-class.md), che fornisce un oggetto stringa indipendente da MFC con le stesse funzionalità`CString`

Quasi tutti i programmi funzionano con i dati di tipo stringa. La `CString` classe di MFC è spesso la soluzione migliore per una gestione flessibile delle stringhe. A partire dalla versione `CString` 7.0, può essere utilizzato in programmi indipendenti da MFC o MFC. Sia la libreria di `CString` runtime che le stringhe di supporto contenenti caratteri multibyte (wide), come nella programmazione Unicode o MBCS.

In questo articolo vengono descritti i servizi generici forniti dalla libreria di classi correlati alla modifica delle stringhe. Gli argomenti trattati in questo articolo includono:Topics covered in this article include:

- [Unicode e MBCS forniscono la portabilità](#_core_unicode_and_mbcs_provide_portability)

- [CStrings e const char Puntatori](#_core_cstrings_and_const_char_pointers)

- [Conteggio dei riferimenti a CStringCString Reference Counting](#_core_cstring_reference_counting)

Il [CStringT classe](../atl-mfc-shared/reference/cstringt-class.md) fornisce il supporto per la modifica di stringhe. Ha lo scopo di sostituire ed estendere la funzionalità normalmente fornita dal pacchetto di stringhe della libreria di runtime del linguaggio C.It is intended to replace and extend the functionality normally provided by the C run-time library string package. La `CString` classe fornisce funzioni membro e operatori per la gestione semplificata delle stringhe, simili a quelli disponibili in Basic.The class supplies member functions and operators for simplified string handling, similar to those found in Basic. La classe fornisce inoltre costruttori e operatori per `CString`la costruzione, l'assegnazione e il confronto di tipi di dati stringa c e standard di C. Poiché `CString` non `CObject`è derivato `CString` da , è possibile utilizzare oggetti indipendentemente dalla maggior parte della libreria MFC (Microsoft Foundation Class Library).

`CString`gli oggetti seguono la "semantica dei valori". Un `CString` oggetto rappresenta un valore univoco. Considerare un `CString` come una stringa effettiva, non come un puntatore a una stringa.

Un `CString` oggetto rappresenta una sequenza di un numero variabile di caratteri. `CString`gli oggetti possono essere considerati come matrici di caratteri.

## <a name="unicode-and-mbcs-provide-portability"></a><a name="_core_unicode_and_mbcs_provide_portability"></a>Unicode e MBCS forniscono la portabilità

Con MFC versione 3.0 e `CString`successive, MFC, incluso , è abilitato sia per i set di caratteri Unicode che per i set di caratteri multibyte (MBCS). Questo supporto semplifica la scrittura di applicazioni portabili che è possibile compilare per i caratteri Unicode o ANSI. Per abilitare questa portabilità, `CString` ogni carattere in un oggetto `wchar_t` è di tipo TCHAR, definito come `char` se si definisse il simbolo _UNICODE quando si compila l'applicazione o come se non fosse. Un `wchar_t` carattere è largo 16 bit. MBCS è abilitato se si compila con il simbolo _MBCS definito. MFC stesso viene compilato con il simbolo di _MBCS (per le librerie NAFX) o il simbolo di _UNICODE (per le librerie UAFX) definito.

> [!NOTE]
> Gli `CString` esempi in questo e gli articoli che li accompagnano sulle stringhe mostrano stringhe letterali formattate correttamente per la portabilità Unicode, utilizzando la macro _T, che converte la stringa letterale nel formato:

`L"literal string"`

> [!NOTE]
> che il compilatore considera come una stringa Unicode. Ad esempio, il seguente codice:

[!code-cpp[NVC_ATLMFC_Utilities#187](../atl-mfc-shared/codesnippet/cpp/string-data-management_1.cpp)]

> [!NOTE]
> viene convertita come stringa Unicode se _UNICODE è definito o come stringa ANSI in caso contrario. Per ulteriori informazioni, vedere l'articolo Supporto Unicode [e MbCS (Multibyte Character Set).](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md)

Un `CString` oggetto può memorizzare fino a INT_MAX (2.147.483.647) caratteri. Il tipo di dati TCHAR viene utilizzato `CString` per ottenere o impostare singoli caratteri all'interno di un oggetto. A differenza delle `CString` matrici di caratteri, la classe dispone di una funzionalità di allocazione della memoria incorporata. Ciò `CString` consente agli oggetti di crescere automaticamente in base alle `CString` esigenze, ovvero non è necessario preoccuparsi di far crescere un oggetto per adattarlo a stringhe più lunghe.

## <a name="cstrings-and-const-char-pointers"></a><a name="_core_cstrings_and_const_char_pointers"></a>CStrings e const char Puntatori

Un `CString` oggetto può anche agire come una `PCXSTR`stringa di tipo C letterale (un oggetto , che è uguale a **const char** <strong>\*</strong> se non in Unicode). L'operatore di [conversione CSimpleStringT::operator PCXSTR](../atl-mfc-shared/reference/csimplestringt-class.md#operator_pcxstr) consente `CString` di sostituire liberamente gli oggetti con puntatori a caratteri nelle chiamate di funzione. Il costruttore **CString( LPCWSTR** `pszSrc` **)** consente di `CString` sostituire i puntatori ai caratteri con gli oggetti.

Non viene effettuato `CString` alcun tentativo di piegare gli oggetti. Se si `CString` fanno `Chicago`due oggetti contenenti `Chicago` , ad esempio, i caratteri in vengono memorizzati in due posizioni. (Questo potrebbe non essere vero per le versioni future di MFC, pertanto non si dovrebbe dipendere da esso.)

> [!NOTE]
> Utilizzare le funzioni membro [CSimpleStringT::GetBuffer](../atl-mfc-shared/reference/csimplestringt-class.md#getbuffer) e [CSimpleStringT::ReleaseBuffer](../atl-mfc-shared/reference/csimplestringt-class.md#releasebuffer) `CString` quando è necessario accedere direttamente a un puntatore non costante a un carattere.

> [!NOTE]
> Utilizzare le funzioni membro [CStringT::AllocSysString](../atl-mfc-shared/reference/cstringt-class.md#allocsysstring) e [CStringT::SetSysString](../atl-mfc-shared/reference/cstringt-class.md#setsysstring) per allocare e impostare gli oggetti BSTR utilizzati nell'automazione (precedentemente noto come automazione OLE).

> [!NOTE]
> Se possibile, `CString` allocare oggetti sul frame anziché sull'heap. Ciò consente di risparmiare memoria e semplifica il passaggio dei parametri.

La `CString` classe non viene implementata come classe `CString` di raccolta della libreria Microsoft Foundation Class, anche se gli oggetti possono certamente essere archiviati come elementi nelle raccolte.

## <a name="cstring-reference-counting"></a><a name="_core_cstring_reference_counting"></a>Conteggio dei riferimenti a CStringCString Reference Counting

A partire dalla versione 4.0 di MFC, quando vengono copiati gli oggetti [della classe CStringT,](../atl-mfc-shared/reference/cstringt-class.md) MFC incrementa un conteggio dei riferimenti anziché copiare i dati. In questo modo il passaggio di parametri per valore e restituzione di `CString` oggetti per valore più efficiente. Queste operazioni fanno sì che il costruttore di copia da chiamare, a volte più di una volta. L'incremento di un conteggio dei riferimenti riduce `CString` tale sovraccarico per queste operazioni comuni e rende l'utilizzo di un'opzione più interessante.

Man mano che ogni copia viene distrutta, il conteggio dei riferimenti nell'oggetto originale viene decrementato. L'oggetto originale `CString` non viene eliminato fino a quando il conteggio dei riferimenti non viene ridotto a zero.

È possibile `CString` utilizzare le funzioni membro [CSimpleStringT::LockBuffer](../atl-mfc-shared/reference/csimplestringt-class.md#lockbuffer) e [CSimpleStringT::UnlockBuffer](../atl-mfc-shared/reference/csimplestringt-class.md#unlockbuffer) per disabilitare o abilitare il conteggio dei riferimenti.

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](../mfc/general-mfc-topics.md)
