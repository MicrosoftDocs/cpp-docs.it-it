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
ms.openlocfilehash: 92568f61bb1ea219ab3ddc96f4c4687dec157c9a
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36931765"
---
# <a name="mfc-library-versions"></a>Versioni di librerie MFC

La libreria MFC è disponibile nelle versioni che supportano ANSI a byte singolo e set di caratteri multibyte (MBCS) codice, nonché le versioni che supportano i caratteri Unicode (codificata come UTF-16LE, il set di caratteri nativo di Windows). Ogni versione MFC è disponibile come una libreria statica o come DLL condivisa. È inoltre disponibile una versione di libreria statica di MFC più piccola che lascia i controlli MFC per i dialoghi, per le applicazioni che sono molto sensibili per le dimensioni e non necessitano di tali controlli. Le librerie MFC sono disponibili in entrambe le modalità di debug e rilascio di versioni per le architetture supportate includono processori ARM, x86 e x64. È possibile creare entrambe le applicazioni (file .exe) e le DLL con le versioni di librerie MFC. È anche un set di librerie MFC compilate di interfacciamento con codice gestito. DLL MFC condivise includono un numero di versione per indicare la compatibilità binaria di libreria.

## <a name="automatic-linking-of-mfc-library-versions"></a>Il collegamento automatico di versioni di librerie MFC

I file di intestazione MFC determinano automaticamente la versione corretta della libreria MFC per creare un collegamento, in base a valori definiti nell'ambiente di compilazione. I file di intestazione MFC aggiungono le direttive del compilatore che indicano al linker di collegare una versione specifica della libreria MFC.

Ad esempio, file di intestazione AFX. File di intestazione H indica al linker di collegare la completa statica, essendo limitata statica o condivisa versione DLL di MFC; Versione ANSI/MBCS o Unicode; e la versione di debug o vendita al dettaglio, a seconda della configurazione di compilazione:

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

File di intestazione MFC includono anche le direttive da collegare in tutte le librerie richieste, incluse le librerie MFC, le librerie Win32, delle librerie OLE, le librerie OLE costruite dagli esempi, le librerie ODBC e così via. 

## <a name="ansi-mbcs-and-unicode"></a>ANSI, MBCS e Unicode

Le versioni della libreria ANSI/MBCS di MFC supportano entrambi i set, ad esempio ASCII carattere a byte singolo e multibyte character set, ad esempio Shift-JIS. Le versioni della libreria MFC Unicode supportano i caratteri Unicode nel formato con codifica UTF-16LE caratteri wide. Utilizzare le versioni della libreria ANSI/MBCS di MFC per supporto Unicode con codifica UTF-8.

Per impostare la configurazione del progetto da utilizzare a byte singolo, multibyte o caratteri wide Unicode stringa e carattere di supporto nell'IDE, usare il **le proprietà del progetto** finestra di dialogo. Nel **proprietà di configurazione** > **generale** impostare il **del Set di caratteri** proprietà per **non impostato** da utilizzare un set di caratteri a byte singolo. Impostare la proprietà su **utilizzare Multi-Byte Character Set** da utilizzare un set di caratteri multibyte o a **utilizzare Set di caratteri Unicode** utilizzare codificata come UTF-16 Unicode.

I progetti MFC usano il simbolo del preprocessore \_UNICODE per indicare il supporto di Unicode UTF-16 caratteri "wide", e \_supporto MBCS per indicare MBCS. Queste opzioni si escludono a vicenda in un progetto.

## <a name="mfc-static-library-naming-conventions"></a>Convenzioni di denominazione libreria statica di MFC

Librerie statiche per MFC utilizzano le seguenti convenzioni di denominazione. I nomi delle librerie si presentano come

> *u*AFX*c**d*.LIB

dove le lettere mostrate in minuscolo corsivo sono dei segnaposti per gli identificatori i cui significati sono mostrati nella tabella seguente:

|Identificatore|Valori e significati|
|---------------|-------------------------|
|*u*|ANSI/MBCS (N) o Unicode (U); omettere per versione senza controlli MFC nelle finestre di dialogo|
|*c*|Versione con controlli MFC nelle finestre di dialogo (CW) o senza (NMCD)|
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

File di debugger aventi lo stesso nome di basa e un'estensione di file PDB sono anche disponibili per ognuna delle librerie statiche.

## <a name="mfc-shared-dll-naming-conventions"></a>Convenzioni di denominazione DLL condivise MFC per

L'operazione MFC DLL condivise anche seguire una convenzione di denominazione strutturata. Ciò semplifica sapere quali DLL o della libreria è consigliabile usare per la quale scopo.

Disporre le DLL MFC *versione* numeri che indicano la compatibilità binaria. Utilizzare le DLL di MFC che hanno la stessa versione di altre librerie e set di strumenti del compilatore per garantire la compatibilità all'interno di un progetto.

|DLL|Descrizione|
|---------|-----------------|
|MFC*versione*. DLL|Versione DLL MFC, ANSI o una versione di MBCS|
|MFC*versione*u. dll|DLL MFC, versione Unicode|
|MFC*versione*D.DLL|Versione DLL MFC, ANSI o MBCS di eseguire il Debug|
|MFC*versione*UD. DLL|DLL MFC, versione di Unicode Debug|
|MFCM*versione*. DLL|DLL MFC con controlli Windows Form, versione ANSI o una versione di MBCS|
|MFCM*versione*u. dll|DLL MFC con controlli Windows Form, versione Unicode|
|MFCM*versione*D.DLL|DLL MFC con controlli Windows Form, versione ANSI o MBCS di eseguire il Debug|
|MFCM*versione*UD. DLL|DLL MFC con controlli Windows Form, versione di Unicode Debug|

Le librerie di importazione necessari per compilare applicazioni o MFC DLL di estensione che utilizzano queste DLL condivise hanno lo stesso nome di basa della DLL, ma presenta un'estensione di file con estensione LIB. Quando si utilizza la DLL condivise, una libreria statica piccola ancora deve essere collegata con il codice; Questa raccolta è denominata MFCS*versione*lib {U} {D}.

Se si collega in modo dinamico la condivisi versione DLL di MFC, se si tratta di un'applicazione o da una DLL di estensione MFC, è necessario includere MFC corrispondente*versione*. DLL o MFC*versione*u. dll quando si distribuisce il prodotto.

Per un elenco di DLL di Visual C++ che può essere distribuito con le applicazioni, vedere [codice distribuibile per Microsoft Visual Studio 2017 SDK (include utilità e file del server di compilazione) e Microsoft Visual Studio 2017](http://go.microsoft.com/fwlink/p/?LinkId=823098).

Per ulteriori informazioni sul supporto Unicode e MBCS in MFC, vedere [supporto Unicode e impostare caratteri Multibyte (MBCS)](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md).

## <a name="dynamic-link-library-support"></a>Supporto di libreria a collegamento dinamico

È possibile utilizzare entrambi statiche o condivise dinamiche librerie MFC per creare DLL che può essere usata per i file eseguibili MFC e non MFC. Queste vengono definite "DLL regolari" o "DLL regolare MFC", per distinguerli dalle DLL che può essere solo di estensione MFC utilizzati da MFC e le applicazioni MFC DLL. Una DLL compilata con le librerie MFC statiche viene a volte chiamata un USRDLL nei riferimenti precedenti, poiché i progetti di DLL MFC definiscono il simbolo del preprocessore  **\_USRDLL**. Una DLL che utilizza MFC DLL condivise è talvolta denominata AFXDLL riferimenti precedenti, in quanto definisce il simbolo del preprocessore  **\_AFXDLL**.

Quando si crea il progetto DLL mediante il collegamento per le librerie MFC statiche, la DLL può essere distribuita senza MFC DLL condivise. Quando il progetto DLL è collegato a librerie di importazione MFC*versione*. LIB o MFC*versione*U.LIB, è necessario distribuire la corrispondenza MFC condivisa DLL MFC*versione*. DLL o MFC*versione*u. dll con la DLL. Per altre informazioni, vedere [DLL](../build/dlls-in-visual-cpp.md).

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](../mfc/general-mfc-topics.md)  
