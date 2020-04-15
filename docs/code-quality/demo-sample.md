---
title: Esempio di progetto C++ per l'analisi del codice
description: Come creare una soluzione di esempio da usare nella procedura dettagliata dell'analisi del codice per Microsoft C' in Visual Studio.
ms.date: 04/14/2020
ms.topic: sample
helpviewer_keywords:
- demo sample [Visual Studio ALM]
- code analysis, samples
ms.assetid: 09e1b9f7-5916-4ed6-a001-5c2d7e710682
ms.openlocfilehash: c2a1b8c80b7e7aebd1f1530c66ade5859b392028
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372053"
---
# <a name="sample-c-project-for-code-analysis"></a>Esempio di progetto C++ per l'analisi del codice

Nelle procedure riportate di seguito viene illustrato come creare l'esempio per [la procedura dettagliata: analizzare il codice C/C](../code-quality/walkthrough-analyzing-c-cpp-code-for-defects.md) Le procedure creano:

- Una soluzione di Visual Studio denominata *CppDemo*.

- Un progetto di libreria statica denominato *CodeDefects*.

- Un progetto di libreria statica denominato *Annotations*.

Le procedure specificano anche il codice per l'intestazione e i file con estensione *cpp* per le librerie statiche.

## <a name="create-the-cppdemo-solution-and-the-codedefects-project"></a>Creare la soluzione CppDemo e il progetto CodeDefects

::: moniker range=">=vs-2019"

1. Aprire Visual Studio e selezionare **Crea un nuovo progetto**

1. Nella finestra di dialogo **Crea un nuovo progetto,** modificare il filtro del linguaggio in **C.**

1. Selezionare **Creazione guidata desktop di Windows** e scegliere il pulsante **Avanti.**

1. Nella casella di testo Nome **progetto** della pagina **Configura nuovo progetto** immettere *CodeDefects*.

1. Nella casella di testo **Nome soluzione** immettere *CppDemo*.

1. Scegliere **Crea**.

1. Nella finestra di dialogo **Progetto desktop Windows** modificare il tipo di **applicazione** in **Libreria statica (lib)**.

1. In **Opzioni aggiuntive**selezionare **Progetto vuoto**.

1. Scegliere **OK** per creare la soluzione e il progetto.

::: moniker-end

::: moniker range="vs-2017"

1. Aprire Visual Studio. Nella barra dei menu scegliere **File** > **Nuovo** > **progetto**.

1. Nella finestra di dialogo **Nuovo progetto** , selezionare Il desktop **di Windows**di Visual **C** >

1. Selezionare **Creazione guidata desktop di Windows**.

1. Nella casella di testo **Nome** immettere *CodeDefects*.

1. Nella casella di testo **Nome soluzione** immettere *CppDemo*.

1. Scegliere **OK**.

1. Nella finestra di dialogo **Progetto desktop Windows** modificare il tipo di **applicazione** in **Libreria statica (lib)**.

1. In **Opzioni aggiuntive**selezionare **Progetto vuoto**.

1. Scegliere **OK** per creare la soluzione e il progetto.

::: moniker-end

::: moniker range="vs-2015"

1. Aprire Visual Studio. Nella barra dei menu scegliere **File** > **Nuovo** > **progetto**.

1. Nella finestra di dialogo **Nuovo progetto,** selezionare **Modelli** > **di Visual C,** > **Win32**.

1. Selezionare **Applicazione console Win32**.

1. Nella casella di testo **Nome** immettere *CodeDefects*.

1. Nella casella di testo **Nome soluzione** immettere *CppDemo*.

1. Scegliere **OK**.

1. Nella finestra di dialogo **Creazione guidata applicazione Win32** scegliere il pulsante **Avanti.**

1. Modificare il **tipo di applicazione** in Libreria **statica**.

1. In **Opzioni aggiuntive**deselezionare **Intestazione precompilata**.

1. Scegliere **Fine** per creare la soluzione e il progetto.

::: moniker-end

## <a name="add-the-header-and-source-file-to-the-codedefects-project"></a>Aggiungere l'intestazione e il file di origine al progetto CodeDefects

1. In Esplora soluzioni espandere **CodeDefects**.

1. Fare clic con il pulsante destro del mouse per aprire il menu di scelta rapida per File di **intestazione**. Scegliere **Aggiungi** > **nuovo elemento**.

1. Nella finestra di dialogo **Aggiungi nuovo elemento** , selezionare**Codice**Di Visual **C,** > quindi File di **intestazione (.h)**.

1. Nella casella di modifica **Nome** immettere *Bug.h*, quindi scegliere il pulsante **Aggiungi.**

1. Nella finestra di modifica di *Bug.h,* selezionare ed eliminare il contenuto.

1. Copiare il codice seguente e incollarlo nel file *Bug.h* nell'editor.

    ```cpp
    #pragma once

    #include <windows.h>

    // Function prototypes
    bool CheckDomain(wchar_t const *);
    HRESULT ReadUserAccount();

    // These constants define the common sizes of the
    // user account information throughout the program
    const int USER_ACCOUNT_LEN = 256;
    const int ACCOUNT_DOMAIN_LEN = 128;
    ```

1. In Esplora soluzioni fare clic con il pulsante destro del mouse per aprire il menu di scelta rapida file **di origine**. Scegliere **Aggiungi** > **nuovo elemento**.

1. Nella finestra di dialogo **Aggiungi nuovo elemento** selezionare **File di C++ (.cpp)**.

1. Nella casella di modifica **Nome** immettere *Bug.cpp*, quindi scegliere il pulsante **Aggiungi.**

1. Copiare il codice seguente e incollarlo nel file *Bug.cpp* nell'editor.

    ```cpp
    #include "Bug.h"

    // the user account
    wchar_t g_userAccount[USER_ACCOUNT_LEN] = { L"domain\\user" };
    int len = 0;

    bool CheckDomain(wchar_t const* domain)
    {
        return (wcsnlen_s(domain, USER_ACCOUNT_LEN) > 0);
    }

    HRESULT ReadUserAccount()
    {
        return S_OK;
    }

    bool ProcessDomain()
    {
        wchar_t* domain = new wchar_t[ACCOUNT_DOMAIN_LEN];
        // ReadUserAccount gets a 'domain\user' input from
        //the user into the global 'g_userAccount'
        if (ReadUserAccount())
        {
            // Copies part of the string prior to the '\'
            // character onto the 'domain' buffer
            for (len = 0; (len < ACCOUNT_DOMAIN_LEN) && (g_userAccount[len] != L'\0'); len++)
            {
                if (g_userAccount[len] == L'\\')
                {
                    // Stops copying on the domain and user separator ('\')
                    break;
                }
                domain[len] = g_userAccount[len];
            }
            if ((len = ACCOUNT_DOMAIN_LEN) || (g_userAccount[len] != L'\\'))
            {
                // '\' was not found. Invalid domain\user string.
                delete[] domain;
                return false;
            }
            else
            {
                domain[len] = L'\0';
            }
            // Process domain string
            bool result = CheckDomain(domain);

            delete[] domain;
            return result;
        }
        return false;
    }

    int path_dependent(int n)
    {
        int i;
        int j;
        if (n == 0)
            i = 1;
        else
            j = 1;
        return i + j;
    }
    ```

1. Nella barra dei menu scegliere **Salva tutto.** > **Save All**

## <a name="add-the-annotations-project-and-configure-it-as-a-static-library"></a>Aggiungere il progetto Annotations e configurarlo come libreria statica

::: moniker range=">=vs-2019"

1. In Esplora soluzioni fare clic con il pulsante destro del mouse su **CppDemo** per aprire il menu di scelta rapida. Scegliere **Aggiungi** > **nuovo progetto**.

1. Nella finestra di dialogo **Aggiungi un nuovo progetto** selezionare Creazione guidata desktop di **Windows**, quindi scegliere il pulsante **Avanti.**

1. Nella casella di testo Nome **progetto** della pagina **Configura nuovo progetto** immettere *Annotazioni*e quindi scegliere **Crea**.

1. Nella finestra di dialogo **Progetto desktop Windows** modificare il tipo di **applicazione** in **Libreria statica (lib)**.

1. In **Opzioni aggiuntive**selezionare **Progetto vuoto**.

1. Scegliere **OK** per creare il progetto.

::: moniker-end

::: moniker range="vs-2017"

1. In Esplora soluzioni fare clic con il pulsante destro del mouse su **CppDemo** per aprire il menu di scelta rapida. Scegliere **Aggiungi** > **nuovo progetto**.

1. Nella finestra di dialogo **Aggiungi nuovo progetto** , selezionare Il desktop di **Windows**di **Visual C** >

1. Selezionare **Creazione guidata desktop di Windows**.

1. Nella casella di testo **Nome** immettere *Annotazioni*, quindi scegliere **OK**.

1. Nella finestra di dialogo **Progetto desktop Windows** modificare il tipo di **applicazione** in **Libreria statica (lib)**.

1. In **Opzioni aggiuntive**selezionare **Progetto vuoto**.

1. Scegliere **OK** per creare il progetto.

::: moniker-end

::: moniker range="vs-2015"

1. In Esplora soluzioni fare clic con il pulsante destro del mouse su **CppDemo** per aprire il menu di scelta rapida. Scegliere **Aggiungi** > **nuovo progetto**.

1. Nella finestra di dialogo **Aggiungi nuovo progetto** , selezionare Visual **C** > **Win32**

1. Selezionare **Applicazione console Win32**.

1. Nella casella di testo **Nome** immettere *Annotazioni*.

1. Scegliere **OK**.

1. Nella finestra di dialogo **Creazione guidata applicazione Win32** scegliere il pulsante **Avanti.**

1. Modificare il **tipo di applicazione** in Libreria **statica**.

1. In **Opzioni aggiuntive**deselezionare **Intestazione precompilata**.

1. Scegliere **Fine** per creare il progetto.

::: moniker-end

## <a name="add-the-header-file-and-source-file-to-the-annotations-project"></a>Aggiungere il file di intestazione e il file di origine per il progetto Annotations

1. In Esplora soluzioni espandere **Annotazioni**.

1. Fare clic con il pulsante destro del mouse per aprire il menu di scelta rapida per File di **intestazione** in **Annotazioni**. Scegliere **Aggiungi** > **nuovo elemento**.

1. Nella finestra di dialogo **Aggiungi nuovo elemento** , selezionare**Codice**Di Visual **C,** > quindi File di **intestazione (.h)**.

1. Nella casella di modifica **Nome** immettere *annotations.h*, quindi scegliere il pulsante **Aggiungi.**

1. Nella finestra di modifica di *annotations.h,* selezionare ed eliminare il contenuto.

1. Copiare il codice seguente e incollarlo nel file *annotations.h* nell'editor.

    ```cpp
    #pragma once
    #include <sal.h>

    struct LinkedList
    {
        struct LinkedList* next;
        int data;
    };

    typedef struct LinkedList LinkedList;

    _Ret_maybenull_ LinkedList* AllocateNode();
    ```

1. In Esplora soluzioni fare clic con il pulsante destro del mouse per aprire il menu di scelta rapida per **File di origine** in **Annotazioni**. Scegliere **Aggiungi** > **nuovo elemento**.

1. Nella finestra di dialogo **Aggiungi nuovo elemento** selezionare **File di C++ (.cpp)**.

1. Nella casella di modifica **Nome** immettere *annotations.cpp*, quindi scegliere il pulsante **Aggiungi.**

1. Copiare il codice seguente e incollarlo nel file *annotations.cpp* nell'editor.

    ```cpp
    #include "annotations.h"
    #include <malloc.h>

    _Ret_maybenull_ LinkedList* AllocateNode()
    {
        LinkedList* result = static_cast<LinkedList*>(malloc(sizeof(LinkedList)));
        return result;
    }

    LinkedList* AddTail(LinkedList* node, int value)
    {
        // finds the last node
        while (node->next != nullptr)
        {
            node = node->next;
        }

        // appends the new node
        LinkedList* newNode = AllocateNode();
        newNode->data = value;
        newNode->next = 0;
        node->next = newNode;

        return newNode;
    }
    ```

1. Nella barra dei menu scegliere **Salva tutto.** > **Save All**

La soluzione è stata completata e deve essere compilata senza errori.

::: moniker range="vs-2017"

> [!NOTE]
> In Visual Studio 2017, è possibile che `E1097 unknown attribute "no_init_all"` venga visualizzato un avviso spurio nel motore IntelliSense.In Visual Studio 2017, you may see a spurious warning in the IntelliSense engine. È possibile ignorare questo avviso.

::: moniker-end
