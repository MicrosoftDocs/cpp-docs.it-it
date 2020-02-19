---
title: Esempio di progetto C++ per l'analisi del codice
ms.date: 11/04/2016
ms.topic: sample
helpviewer_keywords:
- demo sample [Visual Studio ALM]
- code analysis, samples
ms.assetid: 09e1b9f7-5916-4ed6-a001-5c2d7e710682
ms.openlocfilehash: 1966e9cec5825ae37728bbf28c0f21ff4eed62fc
ms.sourcegitcommit: 7bea0420d0e476287641edeb33a9d5689a98cb98
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/17/2020
ms.locfileid: "77418823"
---
# <a name="sample-c-project-for-code-analysis"></a>Esempio di progetto C++ per l'analisi del codice

Nelle procedure seguenti viene illustrato come creare l'esempio per la [procedura dettagliata: analizzare CC++ /codice per i difetti](../code-quality/walkthrough-analyzing-c-cpp-code-for-defects.md). Le procedure creano:

- Una soluzione di Visual Studio con nome CppDemo.

- Un progetto di libreria statica con nome CodeDefects.

- Un progetto di libreria statica con nome Annotations.

Le procedure specificano anche il codice per l'intestazione e i file con estensione *cpp* per le librerie statiche.

## <a name="create-the-cppdemo-solution-and-the-codedefects-project"></a>Creare la soluzione CppDemo e il progetto CodeDefects

1. Aprire Visual Studio e selezionare **Crea un nuovo progetto**

1. Cambia filtro lingua in**C++**

1. Selezionare **progetto vuoto** e fare clic su **Avanti** .

1. Nella casella di testo **nome progetto** Digitare **codedifettos**

1. Nella casella di testo **Nome soluzione** digitare **CppDemo**

1. Fare clic su **Crea**

## <a name="configure-the-codedefects-project-as-a-static-library"></a>Configurare il progetto CodeDefects come libreria statica

1. In Esplora soluzioni fare clic con il pulsante destro del mouse su **CodeDefects** e fare clic su **Proprietà**.

1. Espandere **Proprietà di configurazione** e fare clic su **Generale**.

1. Nell'elenco **generale** impostare tipo di **configurazione**su **libreria statica (. lib)** .

1. Nell'elenco **Avanzate** modificare l' **estensione del file di destinazione** in **. lib**

## <a name="add-the-header-and-source-file-to-the-codedefects-project"></a>Aggiungere l'intestazione e il file di origine al progetto CodeDefects

1. In Esplora soluzioni espandere **CodeDefects**, fare clic con il pulsante destro del mouse su **File di intestazione**, fare clic su **Aggiungi** e quindi fare clic su **Nuovo elemento**.

1. Nella finestra di dialogo **Aggiungi nuovo elemento** fare clic su **Codice** e quindi fare clic su **File di intestazione (.h)** .

1. Nella casella **Nome** digitare **Bug.h** e quindi fare clic su **Aggiungi**.

1. Copiare il codice seguente e incollarlo nel file *bug. h* nell'editor.

    ```cpp
    #pragma once

    #include <windows.h>

    // These functions are consumed by the sample
    // but are not defined. This project cannot be linked!
    bool CheckDomain(LPCTSTR);
    HRESULT ReadUserAccount();

    // These constants define the common sizes of the
    // user account information throughout the program
    const int USER_ACCOUNT_LEN = 256;
    const int ACCOUNT_DOMAIN_LEN = 128;
    ```

1. In Esplora soluzioni fare clic con il pulsante destro del mouse su **File di origine**, scegliere **Nuovo** e quindi fare clic su **Nuovo elemento**.

1. Nella finestra di dialogo **Aggiungi nuovo elemento** fare clic su **File di C++ (.cpp)** .

1. Nella casella **Nome** digitare **Bug.cpp** e quindi fare clic su **Aggiungi**.

1. Copiare il codice seguente e incollarlo nel file *bug. cpp* nell'editor.

    ```cpp
    #include "Bug.h"

    // the user account
    TCHAR g_userAccount[USER_ACCOUNT_LEN] = {};
    int len = 0;

    bool ProcessDomain()
    {
        TCHAR* domain = new TCHAR[ACCOUNT_DOMAIN_LEN];
        // ReadUserAccount gets a 'domain\user' input from
        //the user into the global 'g_userAccount'
        if (ReadUserAccount())
        {
            // Copies part of the string prior to the '\'
            // character onto the 'domain' buffer
            for (len = 0; (len < ACCOUNT_DOMAIN_LEN) && (g_userAccount[len] != L'\0'); len++)
            {
                if (g_userAccount[len] == '\\')
                {
                    // Stops copying on the domain and user separator ('\')
                    break;
                }
                domain[len] = g_userAccount[len];
            }
            if ((len = ACCOUNT_DOMAIN_LEN) || (g_userAccount[len] != '\\'))
            {
                // '\' was not found. Invalid domain\user string.
                delete[] domain;
                return false;
            }
            else
            {
                domain[len] = '\0';
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

1. Fare clic sul menu **File** e quindi fare clic su **Salva tutto**.

## <a name="add-the-annotations-project-and-configure-it-as-a-static-library"></a>Aggiungere il progetto Annotations e configurarlo come libreria statica

1. In Esplora soluzioni fare clic su **CppDemo**, scegliere **Aggiungi** e quindi fare clic su **Nuovo progetto**.

1. Nella finestra di dialogo **Aggiungi nuovo progetto** impostare filtro lingua su **C++** e selezionare **progetto vuoto** , quindi fare clic su **Avanti**.

1. Nella casella di testo **nome progetto** Digitare **annotazioni**, quindi fare clic su **Crea**.

1. In Esplora soluzioni fare clic con il pulsante destro del mouse su **Annotations** e fare clic su **Proprietà**.

1. Espandere **Proprietà di configurazione** e fare clic su **Generale**.

1. Nell'elenco **generale** modificare tipo di **configurazione**, quindi fare clic su **libreria statica (. lib)** .

1. Nell'elenco **Avanzate** selezionare il testo nella colonna accanto a **estensione file di destinazione**, quindi digitare **. lib**.

## <a name="add-the-header-file-and-source-file-to-the-annotations-project"></a>Aggiungere il file di intestazione e il file di origine per il progetto Annotations

1. In Esplora soluzioni espandere **Annotations**, fare clic con il pulsante destro del mouse su **File di intestazione**, fare clic su **Aggiungi** e quindi fare clic su **Nuovo elemento**.

1. Nella finestra di dialogo **Aggiungi nuovo elemento** fare clic su **File di intestazione (.h)** .

1. Nella casella di testo **Nome** digitare **annotations.h** e quindi fare clic su **Aggiungi**.

1. Copiare il codice seguente e incollarlo nel file *Annotations. h* nell'editor.

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

1. In Esplora soluzioni fare clic con il pulsante destro del mouse su **File di origine**, scegliere **Nuovo** e quindi fare clic su **Nuovo elemento**.

1. Nella finestra di dialogo **Aggiungi nuovo elemento** fare clic su **Codice** e quindi fare clic su **File di C++ (.cpp)** .

1. Nella casella di testo **Nome** digitare **annotations.cpp** e quindi fare clic su **Aggiungi**.

1. Copiare il codice seguente e incollarlo nel file *Annotations. cpp* nell'editor.

    ```cpp
    #include "annotations.h"

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

1. Fare clic sul menu **File** e quindi fare clic su **Salva tutto**.

La soluzione è ora completa e dovrebbe essere compilata senza errori.
