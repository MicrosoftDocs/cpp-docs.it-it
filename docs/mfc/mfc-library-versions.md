---
title: Versioni di librerie MFC | Microsoft Docs
ms.custom: ''
ms.date: 1/09/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- class libraries [MFC], building versions
- version information [MFC], MFC library
- MFC class library
- MFC class library, building
- MFC libraries
- MFC, library versions
- libraries [MFC], versions
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1781077896465d8a7a1d925262c3fd0696d24380
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46410559"
---
# <a name="mfc-library-versions"></a>Versioni di librerie MFC

La libreria MFC è disponibile nelle versioni che supportano ANSI a byte singolo e set di caratteri multibyte (MBCS), codice, nonché le versioni che supportano i caratteri Unicode (codificato come UTF-16LE, il set di caratteri nativi di Windows). Ogni versione MFC è disponibile come una libreria statica o come una DLL condivisa. È inoltre disponibile una versione di libreria statica MFC più piccola che esclude i controlli MFC per le finestre di dialogo per le applicazioni che sono molto sensibili per le dimensioni e non richiedono tali controlli. Le librerie MFC sono disponibili in entrambe le modalità di debug e rilascio di versioni per le architetture supportate che includono i processori ARM, x64 e x86. È possibile creare entrambe le applicazioni (file .exe) e DLL con le versioni delle librerie MFC. È presente anche un set di librerie MFC compilato per interfacciarsi con codice gestito. DLL condivise MFC include un numero di versione per indicare la compatibilità binaria della libreria.

## <a name="automatic-linking-of-mfc-library-versions"></a>Collegamento automatico della versioni di librerie MFC

File di intestazione MFC determinano automaticamente la versione corretta della libreria MFC per creare un collegamento, in base ai valori definiti nell'ambiente di compilazione. File di intestazione MFC aggiungono le direttive del compilatore che indicano al linker il collegamento in una versione specifica della libreria MFC.

Ad esempio, file di intestazione AFX. File di intestazione H indica al linker di collegare in statica completo, limitata dalla static o shared versione DLL di MFC. Versione ANSI/MBCS o Unicode; e la versione di debug o di vendita al dettaglio, a seconda della configurazione di compilazione:

```cpp
#ifndef _AFXDLL
    #ifdef _AFX_NO_MFC_CONTROLS_IN_DIALOGS
        #ifdef _DEBUG
            #pragma comment(lib, "afxnmcdd.lib")
        #else
            #pragma comment(lib, "afxnmcd.lib")
        #endif
        #pragma comment(linker, "/include:__afxNoMFCControlSupportInDialogs")
        #pragma comment(linker, "/include:__afxNoMFCControlContainerInDialogs")
    #endif
    #ifndef _UNICODE
        #ifdef _DEBUG
            #pragma comment(lib, "nafxcwd.lib")
        #else
            #pragma comment(lib, "nafxcw.lib")
        #endif
    #else
        #ifdef _DEBUG
            #pragma comment(lib, "uafxcwd.lib")
        #else
            #pragma comment(lib, "uafxcw.lib")
        #endif
    #endif
#else
    #ifndef _UNICODE
        #ifdef _DEBUG
            #pragma comment(lib, "mfc" _MFC_FILENAME_VER "d.lib")
            #pragma comment(lib, "mfcs" _MFC_FILENAME_VER "d.lib")
        #else
            #pragma comment(lib, "mfc" _MFC_FILENAME_VER ".lib")
            #pragma comment(lib, "mfcs" _MFC_FILENAME_VER ".lib")
        #endif
    #else
        #ifdef _DEBUG
            #pragma comment(lib, "mfc" _MFC_FILENAME_VER "ud.lib")
            #pragma comment(lib, "mfcs" _MFC_FILENAME_VER "ud.lib")
        #else
            #pragma comment(lib, "mfc" _MFC_FILENAME_VER "u.lib")
            #pragma comment(lib, "mfcs" _MFC_FILENAME_VER "u.lib")
        #endif
    #endif
#endif
```

File di intestazione MFC anche includono le direttive per collegare tutte le librerie richieste, incluse le librerie MFC, le librerie Win32, le librerie OLE, le librerie OLE costruite dagli esempi, le librerie ODBC e così via.

## <a name="ansi-mbcs-and-unicode"></a>ANSI, MBCS e Unicode

Le versioni della libreria ANSI/MBCS di MFC supportano entrambi gli insiemi di carattere a byte singolo, ad esempio ASCII e set di caratteri multibyte, ad esempio Shift-JIS. Le versioni della libreria MFC Unicode supportano Unicode nel formato con codifica UTF-16LE caratteri "wide". Usare le versioni della libreria ANSI/MBCS di MFC per il supporto per Unicode con codifica UTF-8.

Per impostare la configurazione del progetto da utilizzare a un byte, multibyte o caratteri wide Unicode stringa e carattere supporto nell'IDE, usare il **proprietà del progetto** finestra di dialogo. Nel **le proprietà di configurazione** > **generali** pagina, impostare il **Set di caratteri** proprietà **non impostato** da utilizzare un set di caratteri a byte singolo. Impostare la proprietà su **usare Multi-Byte Character Set** da usare un set di caratteri multibyte o a **usare Set di caratteri Unicode** utilizzare codificata come UTF-16 Unicode.

I progetti MFC usano il simbolo del preprocessore \_UNICODE per indicare il supporto di Unicode UTF-16 caratteri "wide", e \_supporto MBCS per indicare il formato MBCS. Queste opzioni si escludono a vicenda in un progetto.

## <a name="mfc-static-library-naming-conventions"></a>Convenzioni di denominazione libreria statica di MFC

Librerie statiche per MFC utilizzano le seguenti convenzioni di denominazione. I nomi delle librerie si presentano come

> *u*AFX*c**d*.LIB

dove le lettere mostrate in minuscolo corsivo sono dei segnaposti per gli identificatori i cui significati sono mostrati nella tabella seguente:

|Identificatore|Valori e significati|
|---------------|-------------------------|
|*u*|ANSI/MBCS (N) o Unicode (U); omettere per la versione senza controlli MFC nelle finestre di dialogo|
|*c*|Versione con controlli MFC nelle finestre di dialogo (CW Closest) o senza (NMCD)|
|*d*|Debug o Release: D=Debug; omettere l'identificatore per le versioni di rilascio|

Tutte le librerie elencate nella tabella seguente sono incluse precompilate nella directory \atlmfc\lib per le architetture di compilazione supportati.

|Libreria|Descrizione|
|-------------|-----------------|
|NAFXCW.LIB|Libreria a collegamento statico MFC, versione di rilascio|
|NAFXCWD.LIB|Libreria a collegamento statico MFC, versione di debug|
|UAFXCW.LIB|Libreria a collegamento statico MFC con supporto Unicode, versione di rilascio|
|UAFXCWD.LIB|Libreria a collegamento statico MFC con supporto Unicode, versione di debug|
|AFXNMCD.LIB|Libreria a collegamento statico MFC senza controlli di finestra di dialogo MFC, versione di rilascio|
|AFXNMCDD.LIB|Libreria a collegamento statico MFC senza controlli di finestra di dialogo MFC, versione di Debug|

File di debugger che hanno lo stesso nome di base e un'estensione di file PDB sono anche disponibili per ognuna delle librerie statiche.

## <a name="mfc-shared-dll-naming-conventions"></a>Convenzioni di denominazione DLL condivise MFC

MFC DLL condivise anche seguire una convenzione di denominazione strutturata. Questo rende più facile sapere quali DLL o della libreria è consigliabile usare per un determinato scopo.

Le DLL di MFC hanno *versione* numeri che indicano la compatibilità binaria. Usare le DLL di MFC che abbia la stessa versione di altre librerie e set di strumenti del compilatore per garantire la compatibilità all'interno di un progetto.

|DLL|Descrizione|
|---------|-----------------|
|MFC*versione*. DLL|Versione finale di MBCS, ANSI o DLL MFC|
|MFC*versione*U.DLL|DLL MFC, versione finale di Unicode|
|MFC*versione*D.DLL|Versione DLL MFC, ANSI o eseguire il Debug di MBCS|
|MFC*versione*UD. DLL|DLL MFC, versione di Debug di Unicode|
|MFCM*versione*. DLL|DLL MFC con controlli Windows Form, versione finale di MBCS o ANSI|
|MFCM*versione*U.DLL|DLL MFC con controlli Windows Form, versione finale di Unicode|
|MFCM*versione*D.DLL|DLL MFC con controlli Windows Form, la versione ANSI o eseguire il Debug di MBCS|
|MFCM*versione*UD. DLL|DLL MFC con controlli Windows Form, versione di Debug di Unicode|

Le librerie di importazione necessarie per creare applicazioni o MFC di estensione dll che utilizzano queste DLL condivise con lo stesso nome di base della DLL, ma hanno un'estensione di file con estensione LIB. Quando si usano le DLL condivise, una piccola libreria statica ancora deve essere collegata con il codice. Questa libreria è denominata MFCS*versione*lib {U} {D}.

Se si collegano dinamicamente la versione DLL condivisa di MFC, se si tratta di un'applicazione o da una DLL di estensione MFC, è necessario includere la corrispondenza MFC*versione*. File DLL o MFC*versione*U.DLL quando si distribuisce il prodotto.

Per un elenco di DLL di Visual C++ che può essere distribuito con le applicazioni, vedere [codice distribuibile per Microsoft Visual Studio 2017 e Microsoft Visual Studio 2017 SDK (include utilità e file del server di compilazione)](http://go.microsoft.com/fwlink/p/?LinkId=823098).

Per altre informazioni sul supporto Unicode e MBCS in MFC, vedere [supporto Unicode e Set di caratteri Multibyte (MBCS)](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md).

## <a name="dynamic-link-library-support"></a>Supporto di libreria a collegamento dinamico

È possibile utilizzare entrambi statiche o shared dinamiche librerie MFC per creare DLL che può essere utilizzata dagli eseguibili MFC e non MFC. Questi sono denominati "DLL regolari" o "DLL MFC regolari", per distinguerli dalle DLL che può essere solo di estensione MFC utilizzate da applicazioni MFC e MFC DLL. Una DLL compilata con le librerie MFC statiche viene talvolta chiamata un USRDLL nei riferimenti meno recenti, perché i progetti di DLL MFC definiscono il simbolo del preprocessore  **\_USRDLL**. Una DLL che Usa MFC condivisi DLL viene talvolta denominata AFXDLL nei riferimenti meno recenti, in quanto definisce il simbolo del preprocessore  **\_AFXDLL**.

Quando si crea il progetto DLL mediante il collegamento alle librerie statiche di MFC, la DLL può essere distribuita senza DLL condivise di MFC. Quando il progetto DLL è collegato a librerie di importazione MFC*versione*. LIB o MFC*versione*U.LIB, è necessario distribuire la corrispondenza MFC condivisa DLL MFC*versione*. File DLL o MFC*versione*U.DLL contestualmente le DLL. Per altre informazioni, vedere [DLL](../build/dlls-in-visual-cpp.md).

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](../mfc/general-mfc-topics.md)
