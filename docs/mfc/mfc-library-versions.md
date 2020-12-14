---
description: 'Ulteriori informazioni su: versioni della libreria MFC'
title: Versioni di librerie MFC
ms.date: 05/08/2019
helpviewer_keywords:
- class libraries [MFC], building versions
- version information [MFC], MFC library
- MFC class library
- MFC class library, building
- MFC libraries
- MFC, library versions
- libraries [MFC], versions
ms.openlocfilehash: 26d17604ec201deffd5fd2d5e843269e67e3dd07
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97280586"
---
# <a name="mfc-library-versions"></a>Versioni di librerie MFC

La libreria MFC è disponibile nelle versioni che supportano il codice ANSI a byte singolo e Multibyte Character Set (MBCS), nonché le versioni che supportano Unicode (codificata come UTF-16LE, il set di caratteri nativo di Windows). Ogni versione MFC è disponibile come libreria statica o come DLL condivisa. Esiste anche una versione di libreria statica MFC più piccola che lascia i controlli MFC per le finestre di dialogo, per le applicazioni che sono molto sensibili alle dimensioni e non richiedono tali controlli. Le librerie MFC sono disponibili nelle versioni di debug e di rilascio per le architetture supportate che includono processori x86, x64 e ARM. È possibile creare entrambe le applicazioni (file con estensione exe) e le dll con qualsiasi versione delle librerie MFC. È inoltre disponibile un set di librerie MFC compilate per l'interazione con codice gestito. Le DLL condivise MFC includono un numero di versione per indicare la compatibilità binaria della libreria.

## <a name="automatic-linking-of-mfc-library-versions"></a>Collegamento automatico di versioni della libreria MFC

I file di intestazione MFC determinano automaticamente la versione corretta della libreria MFC da collegare, in base ai valori definiti nell'ambiente di compilazione. I file di intestazione MFC aggiungono direttive del compilatore che indicano al linker di collegarsi a una versione specifica della libreria MFC.

Ad esempio, AFX. Il file di intestazione H indica al linker di collegarsi alla versione statica completa, statica limitata o DLL condivisa di MFC; ANSI/MBCS o versione Unicode; e la versione finale o di debug, a seconda della configurazione della build:

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

I file di intestazione MFC includono inoltre le direttive per il collegamento di tutte le librerie necessarie, incluse le librerie MFC, le librerie Win32, le librerie OLE, le librerie OLE compilate da esempi, le librerie ODBC e così via.

## <a name="ansi-mbcs-and-unicode"></a>ANSI, MBCS e Unicode

Le versioni della libreria ANSI/MBCS MFC supportano sia i set di caratteri a byte singolo, ad esempio ASCII, sia i set di caratteri multibyte come Shift-JIS. Le versioni della libreria Unicode MFC supportano Unicode nel formato con codifica caratteri wide UTF-16LE. Utilizzare le versioni della libreria ANSI/MBCS di MFC per il supporto Unicode con codifica UTF-8.

Per impostare la configurazione del progetto in modo da utilizzare la stringa Unicode a byte singolo, multibyte o a caratteri wide e il supporto dei caratteri nell'IDE, utilizzare la finestra di dialogo **Proprietà progetto** . Nella pagina **generale proprietà di configurazione**  >   impostare la proprietà **set di caratteri** su **non impostato** per l'utilizzo di un set di caratteri a byte singolo. Impostare la proprietà in modo da **usare un set di caratteri multibyte** per usare un multibyte character set o per usare il **set di caratteri Unicode** per usare Unicode con codifica UTF-16.

I progetti MFC utilizzano il simbolo del preprocessore \_ Unicode per indicare il supporto Unicode UTF-16 a caratteri wide e \_ MBCS per indicare il supporto MBCS. Queste opzioni si escludono a vicenda in un progetto.

## <a name="mfc-static-library-naming-conventions"></a>Convenzioni di denominazione delle librerie statiche MFC

Le librerie statiche per MFC utilizzano le convenzioni di denominazione seguenti. I nomi delle librerie si presentano come

> <em>u</em> AFX<em>CD</em>. LIB

dove le lettere mostrate in minuscolo corsivo sono dei segnaposti per gli identificatori i cui significati sono mostrati nella tabella seguente:

|Identificatore|Valori e significati|
|---------------|-------------------------|
|*u*|ANSI/MBCS (N) o Unicode (U); omettere per la versione senza controlli MFC nelle finestre di dialogo|
|*c*|Versione con controlli MFC nelle finestre di dialogo (CW) o senza (NMCD)|
|*d*|Debug o Release: D=Debug; omettere l'identificatore per le versioni di rilascio|

Tutte le librerie elencate nella tabella seguente sono incluse nella directory \atlmfc\lib per le architetture di compilazione supportate.

|Libreria|Descrizione|
|-------------|-----------------|
|NAFXCW.LIB|Libreria a collegamento statico MFC, versione di rilascio|
|NAFXCWD.LIB|Libreria a collegamento statico MFC, versione di debug|
|UAFXCW. LIB|Libreria a collegamento statico MFC con supporto Unicode, versione di rilascio|
|UAFXCWD. LIB|Libreria a collegamento statico MFC con supporto Unicode, versione di debug|
|AFXNMCD. LIB|Libreria di Static-Link MFC senza controlli della finestra di dialogo MFC, versione di rilascio|
|AFXNMCDD. LIB|Libreria di Static-Link MFC senza controlli della finestra di dialogo MFC, versione di debug|

Per ognuna delle librerie statiche sono disponibili anche i file del debugger con lo stesso nome di base e l'estensione pdb.

## <a name="mfc-shared-dll-naming-conventions"></a>Convenzioni di denominazione DLL condivise MFC

Anche le DLL condivise MFC seguono una convenzione di denominazione strutturata. In questo modo è più semplice individuare la DLL o la libreria da utilizzare per scopi specifici.

Le DLL MFC includono numeri di *versione* che indicano la compatibilità binaria. Utilizzare le DLL MFC con la stessa versione delle librerie e del set di strumenti del compilatore per garantire la compatibilità all'interno di un progetto.

|DLL|Description|
|---------|-----------------|
|*Versione* MFC. DLL|DLL MFC, versione di rilascio ANSI o MBCS|
|*Versione* MFCU.DLL|DLL MFC, versione di rilascio Unicode|
|*Versione* MFCD.DLL|DLL MFC, versione di debug ANSI o MBCS|
|*Versione* MFCUD.DLL|DLL MFC, versione di debug Unicode|
|*Versione* di MFCM. DLL|DLL MFC con controlli di Windows Forms, versione di rilascio ANSI o MBCS|
|U.DLL *versione* MFCM|DLL MFC con controlli di Windows Forms, versione di rilascio Unicode|
|D.DLL *versione* MFCM|DLL MFC con controlli di Windows Forms, versione di debug ANSI o MBCS|
|UD.DLL *versione* MFCM|DLL MFC con controlli di Windows Forms, versione di debug Unicode|

Le librerie di importazione necessarie per compilare applicazioni o dll di estensione MFC che usano queste DLL condivise hanno lo stesso nome di base della DLL, ma hanno un'estensione di file. lib. Quando si usano le DLL condivise, una piccola libreria statica deve essere ancora collegata al codice. Questa libreria è denominata MFC *versione*{U} {D}. lib.

Se si collega in modo dinamico alla versione DLL condivisa di MFC, sia che si tratti di un'applicazione o di una DLL di estensione MFC, è necessario includere la *versione* MFC corrispondente. DLL o *versione* MFCU.DLL quando si distribuisce il prodotto.

Per un elenco di Visual C++ dll che possono essere distribuite con le applicazioni, vedere il [codice distribuibile per Microsoft Visual Studio 2017 e Microsoft Visual Studio SDK 2017 (include utilità e file BuildServer)](/visualstudio/productinfo/2017-redistribution-vs) o il [codice distribuibile per Visual Studio 2019](/visualstudio/releases/2019/redistribution).

Per ulteriori informazioni sul supporto MBCS e Unicode in MFC, vedere [supporto di Unicode e set di caratteri multibyte (MBCS)](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md).

## <a name="dynamic-link-library-support"></a>Supporto della libreria a collegamento dinamico

È possibile utilizzare le librerie MFC dinamiche statiche o condivise per creare DLL che possono essere utilizzate da file eseguibili sia MFC che non MFC. Queste sono denominate "DLL regolari" o "DLL MFC regolari" per distinguerle dalle DLL di estensione MFC che possono essere usate solo dalle app MFC e dalle DLL MFC. Una DLL compilata utilizzando le librerie statiche MFC viene talvolta denominata USRDLL nei riferimenti precedenti, perché i progetti DLL MFC definiscono il simbolo del preprocessore **\_ USRDLL**. Una DLL che usa le DLL condivise MFC viene talvolta denominata AFXDLL nei riferimenti precedenti, perché definisce il simbolo del preprocessore **\_ AFXDLL**.

Quando si crea il progetto di DLL tramite il collegamento alle librerie statiche MFC, la DLL può essere distribuita senza le DLL condivise MFC. Quando il progetto DLL viene collegato alla *versione* di importazione librerie MFC. LIB o MFC *versione* U. lib, è necessario distribuire la corrispondente *versione* MFC della DLL condivisa MFC. DLL o *versione* MFCU.DLL insieme alla dll. Per ulteriori informazioni, vedere [dll](../build/dlls-in-visual-cpp.md).

## <a name="see-also"></a>Vedi anche

[Argomenti MFC generali](general-mfc-topics.md)
