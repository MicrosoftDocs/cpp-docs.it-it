---
title: Versioni di librerie MFC | Documenti Microsoft
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
ms.openlocfilehash: 9fb4f73d1a0360ddad3983179415d0f7fc2d3cda
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="mfc-library-versions"></a>Versioni di librerie MFC

La libreria MFC è disponibile nelle versioni che supportano ANSI a byte singolo e del set di caratteri multibyte (MBCS) codice, così come le versioni che supportano Unicode (codificato come UTF-16LE, il set di caratteri nativo di Windows). Ogni versione MFC è disponibile come una libreria statica o come una DLL condivisa. È inoltre disponibile una versione di libreria statica di MFC più piccola che lascia i controlli MFC per finestre di dialogo, per le applicazioni che sono molto sensibili alle dimensioni e non sono necessarie tali controlli. Le librerie MFC sono disponibili in entrambe le modalità di debug e rilascio di versioni per le architetture supportate includono processori ARM, x64 e x86. È possibile creare entrambe le applicazioni (file .exe) e le DLL con le versioni delle librerie MFC. È anche un set di librerie MFC compilati per l'interfaccia con codice gestito. DLL MFC condivise includono un numero di versione per indicare la compatibilità binaria di libreria.

## <a name="automatic-linking-of-mfc-library-versions"></a>Il collegamento automatico di versioni di librerie MFC

File di intestazione MFC determinano automaticamente la versione corretta della libreria MFC per creare un collegamento, in base ai valori definiti nell'ambiente di compilazione. File di intestazione MFC aggiungono le direttive del compilatore che indicano al linker per collegare una versione specifica della libreria MFC.

Ad esempio, file di intestazione AFX. File di intestazione H indica al linker di collegamento nella completo versione statica con limitata statica o condivisa DLL di MFC. Versione ANSI/MBCS o Unicode. e la versione di debug o vendita al dettaglio, a seconda della configurazione di compilazione:

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

File di intestazione MFC includono anche le direttive per collegare tutte le librerie richieste, incluse le librerie MFC, librerie Win32, le librerie OLE, le librerie OLE costruite dagli esempi, le librerie ODBC e così via. 

## <a name="ansi-mbcs-and-unicode"></a>ANSI, MBCS e Unicode

Le versioni della libreria MFC ANSI/MBCS supportano entrambi i set, ad esempio ASCII carattere a byte singolo e multibyte character set, ad esempio Shift-JIS. Le versioni della libreria MFC Unicode supportano i caratteri Unicode nel formato con codifica UTF-16LE caratteri "wide". Utilizzare le versioni della libreria ANSI/MBCS di MFC per il supporto per Unicode con codifica UTF-8.

Per impostare la configurazione del progetto da utilizzare a byte singolo, multibyte o caratteri wide Unicode stringa e carattere di supporto nell'IDE, utilizzare il **le proprietà del progetto** finestra di dialogo. Nel **le proprietà di configurazione** > **generale** pagina, impostare il **del Set di caratteri** proprietà **non impostato** da utilizzare un set di caratteri a byte singolo. Impostare la proprietà su **utilizzare Multi-Byte Character Set** per utilizzare un set di caratteri multibyte o **utilizzare Set di caratteri Unicode** utilizzare codificata come UTF-16 Unicode.

Progetti MFC usano il simbolo del preprocessore  **\_UNICODE** per indicare il supporto di Unicode UTF-16 caratteri "wide", e  **\_MBCS** per indicare il supporto MBCS. Queste opzioni si escludono a vicenda in un progetto.

## <a name="mfc-static-library-naming-conventions"></a>Convenzioni di denominazione di libreria statica di MFC

Librerie statiche per MFC utilizzano le seguenti convenzioni di denominazione. I nomi delle librerie si presentano come

> *u*AFX*c**d*.LIB

dove le lettere mostrate in minuscolo corsivo sono dei segnaposti per gli identificatori i cui significati sono mostrati nella tabella seguente:

|Identificatore|Valori e significati|
|---------------|-------------------------|
|*u*|ANSI/MBCS (N) o Unicode (U); omettere per la versione senza controlli MFC nelle finestre di dialogo|
|*c*|Versione con controlli MFC nelle finestre di dialogo (CW) o senza (NMCD)|
|*d*|Debug o Release: D=Debug; omettere l'identificatore per le versioni di rilascio|

Tutte le librerie elencate nella tabella seguente sono incluse precompilate nella directory \atlmfc\lib per le architetture di compilazione supportati.

|Libreria|Descrizione|
|-------------|-----------------|
|NAFXCW.LIB|Libreria a collegamento statico MFC, versione di rilascio|
|NAFXCWD.LIB|Libreria a collegamento statico MFC, versione di debug|
|UAFXCW.LIB|Libreria a collegamento statico MFC con supporto Unicode, versione di rilascio|
|UAFXCWD.LIB|Libreria a collegamento statico MFC con supporto Unicode, versione di debug|
|AFXNMCD.LIB|Libreria a collegamento statico MFC senza controlli di finestra di dialogo MFC, versione|
|AFXNMCDD.LIB|Libreria a collegamento statico MFC senza controlli di finestra di dialogo MFC, versione di Debug|

File di debugger aventi lo stesso nome di base e un'estensione di file PDB sono anche disponibili per ognuna delle librerie statiche.

## <a name="mfc-shared-dll-naming-conventions"></a>Convenzioni di denominazione DLL condivise MFC per

MFC DLL condivise anche seguire una convenzione di denominazione strutturata. Questo rende più semplice sapere quali DLL o della libreria da utilizzare per un determinato scopo.

Le DLL di MFC sono *versione* numeri che indicano la compatibilità binaria. Utilizzare le DLL MFC che hanno la stessa versione di altre librerie e strumenti del compilatore per garantire la compatibilità di un progetto.

|DLL|Descrizione|
|---------|-----------------|
|MFC*versione*. DLL|Versione finale di MBCS, ANSI o DLL MFC|
|MFC*versione*U.DLL|DLL MFC, versione Unicode|
|MFC*versione*D.DLL|Versione DLL MFC, ANSI o MBCS di Debug|
|MFC*versione*UD. DLL|DLL MFC, versione di Unicode Debug|
|MFCM*versione*. DLL|DLL MFC con controlli Windows Form, la versione ANSI o una versione di MBCS|
|MFCM*versione*U.DLL|DLL MFC con controlli Windows Form, la versione Unicode|
|MFCM*versione*D.DLL|DLL MFC con controlli Windows Form, la versione ANSI o MBCS di Debug|
|MFCM*versione*UD. DLL|DLL MFC con controlli Windows Form, versione di Unicode Debug|

Le librerie di importazione necessari per compilare applicazioni o MFC DLL di estensione che utilizzano queste DLL condivise hanno lo stesso nome di base della DLL, ma hanno un'estensione di file con estensione LIB. Quando si utilizza la DLL condivise, una libreria statica di piccole dimensioni ancora deve essere collegata con il codice. Questa raccolta è denominata MFCS*versione*lib {U} {D}.

Se si collega in modo dinamico per la versione DLL condivisa di MFC, se si tratta di un'applicazione o da una DLL di estensione MFC, è necessario includere MFC corrispondente*versione*. MFC e DLL*versione*U.DLL quando si distribuisce il prodotto.

Per un elenco di DLL di Visual C++ che può essere distribuito con le applicazioni, vedere [codice distribuibile per Microsoft Visual Studio 2017 e Microsoft Visual Studio 2017 SDK (include utilità e file di compilazione)](http://go.microsoft.com/fwlink/p/?LinkId=823098).

Per ulteriori informazioni sul supporto Unicode e MBCS in MFC, vedere [supporto Unicode e impostare caratteri Multibyte (MBCS)](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md).

## <a name="dynamic-link-library-support"></a>Supporto di libreria a collegamento dinamico

È possibile utilizzare uno statiche o condivise dinamiche librerie MFC per creare DLL che può essere usata dagli eseguibili MFC e non MFC. Questi sono denominati "DLL regolari" o "DLL regolari MFC", per distinguerli da MFC DLL di estensione che può essere utilizzato da applicazioni MFC e MFC DLL. Una DLL compilata con le librerie MFC statiche viene talvolta chiamata un USRDLL nei riferimenti precedenti, poiché i progetti di DLL MFC definiscono il simbolo del preprocessore  **\_USRDLL**. Una DLL che utilizza MFC DLL condivise è talvolta denominata AFXDLL riferimenti precedenti, in quanto definisce il simbolo del preprocessore  **\_AFXDLL**.

Quando si crea il progetto DLL mediante il collegamento per le librerie MFC statiche, la DLL può essere distribuita senza MFC DLL condivise. Quando il progetto DLL collegate le librerie di importazione MFC*versione*. MFC o LIB*versione*U.LIB, è necessario distribuire la corrispondenza MFC condivisa DLL MFC*versione*. MFC e DLL*versione*U.DLL con la DLL. Per ulteriori informazioni, vedere [DLL](../build/dlls-in-visual-cpp.md).

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](../mfc/general-mfc-topics.md)  
