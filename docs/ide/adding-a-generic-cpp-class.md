---
description: 'Altre informazioni su: aggiungere una classe C++ generica'
title: Aggiungere una classe C++ generica
ms.date: 11/09/2018
f1_keywords:
- vc.codewiz.classes.adding.generic
- vc.codewiz.class.generic
helpviewer_keywords:
- Visual C++, classes
- generic classes, adding
- generic classes
- generic C++ class wizard [C++]
ms.assetid: e95a5a14-dbed-4edc-8551-344fe48613cb
ms.openlocfilehash: ed84f7cf3d1b2e85c407c275b20a56ff06dddc21
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97160181"
---
# <a name="add-a-generic-c-class"></a>Aggiungere una classe C++ generica

È possibile aggiungere una classe C++ generica usando la **Visualizzazione classi**. Una classe C++ generica è una classe che viene definita o che viene derivata da una classe definita.

**Per aggiungere una classe C++ generica a un progetto:**

1. Nella **Visualizzazione classi** fare clic con il pulsante destro del mouse sul progetto a cui aggiungere la nuova classe, scegliere **Aggiungi** e quindi **Classe**.

1. Nella finestra di dialogo [Aggiungi classe](./adding-a-class-visual-cpp.md#add-class-dialog-box) nel riquadro dei modelli selezionare **Classe C++**. Selezionare **Aggiungi** per visualizzare la [Creazione guidata classe C++ generica](#generic-c-class-wizard).

1. Nella procedura guidata specificare un nome di classe, quindi definire le impostazioni o accettare le impostazioni predefinite.

1. Per chiudere la procedura guidata e visualizzare la nuova classe C++ generica nel progetto, selezionare **Fine**.

## <a name="in-this-section"></a>Contenuto della sezione

- [Creazione guidata classe C++ generica](#generic-c-class-wizard)

## <a name="generic-c-class-wizard"></a>Creazione guidata classe C++ generica

Aggiunge una classe C++ generica a un progetto. La classe non eredita da ATL o MFC.

- **Nome classe**

  Imposta il nome della nuova classe.

- **File con estensione h**

  Imposta il nome del file di intestazione per la nuova classe. Per impostazione predefinita, il nome è basato sul nome specificato in **Nome classe**. Per salvare il file di intestazione nel percorso desiderato o per aggiungere la dichiarazione di classe a un file esistente, selezionare il pulsante con i puntini di sospensione (**...**). Se si specifica un file esistente e si seleziona **fine**, la procedura guidata richiede di specificare se la dichiarazione di classe deve essere aggiunta al contenuto del file. Per aggiungere la dichiarazione, selezionare **Sì**; per tornare alla procedura guidata e specificare un altro nome file, selezionare **No**.

- **File con estensione cpp**

  Imposta il nome del file di implementazione per la nuova classe. Per impostazione predefinita, il nome è basato sul nome specificato in **Nome classe**. Per salvare il file di implementazione nel percorso desiderato o per aggiungere la definizione di classe a un file esistente, selezionare il pulsante con i puntini di sospensione (**...**). Se si specifica un file esistente e si seleziona **fine**, la procedura guidata richiede di specificare se la definizione della classe deve essere aggiunta al contenuto del file. Per aggiungere la definizione, selezionare **Sì**; per tornare alla procedura guidata e specificare un altro nome file, selezionare **No**.

- **Classe di base**

  Imposta la classe base per la nuova classe.

- **Accesso**

  Imposta l'accesso ai membri della classe base per la nuova classe. I modificatori di accesso sono parole chiave che specificano il livello di accesso di altre classi alle funzioni membro della classe. Per altre informazioni sulla specifica dell'accesso, vedere [Controllo di accesso dei membri](../cpp/member-access-control-cpp.md). Per impostazione predefinita, il livello di accesso della classe è impostato su **`public`** .

  - **`public`**
  - **`protected`**
  - **`private`**
  - **Predefinito** (Non viene generato alcun modificatore di accesso).

- **Distruttore virtuale**

  Specifica se il distruttore della classe è virtuale. L'uso di un distruttore virtuale consente di garantire che venga chiamato il distruttore corretto quando si eliminano le istanze delle classi derivate.

- **Inline**

  Genera il costruttore della classe e la definizione della classe come funzioni inline nel file di intestazione.

- **Gestito**

  Se selezionata, aggiunge una classe gestita e il file di intestazione. Se non è selezionata, aggiunge una classe nativa e il file di intestazione.
