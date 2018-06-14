---
title: Creazione guidata classe C++ generica | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.codewiz.class.generic
dev_langs:
- C++
helpviewer_keywords:
- Generic C++ Class Wizard [C++]
ms.assetid: aa95be9e-fc1b-45db-a11d-0d32c4929077
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 43e86a4047ef025f49dd01eda90f324623a90752
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33328305"
---
# <a name="generic-c-class-wizard"></a>Creazione guidata classe C++ generica
Aggiunge una classe C++ generica a un progetto. La classe non eredita da ATL o MFC.  
  
 **Nome classe**  
 Imposta il nome della nuova classe.  
  
 **File con estensione h**  
 Imposta il nome del file di intestazione per la nuova classe. Per impostazione predefinita, il nome è basato sul nome specificato in **Nome classe**. Per salvare il file di intestazione nel percorso desiderato o aggiungere la dichiarazione di classe in un file esistente, fare clic sul pulsante con i puntini di sospensione (**...** ). Se si specifica un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se la dichiarazione di classe deve essere aggiunta al contenuto del file. Per aggiungere la dichiarazione, fare clic su **Sì**; per tornare alla procedura guidata e specificare un altro nome di file, fare clic su **No**.  
  
 **File con estensione cpp**  
 Imposta il nome del file di implementazione per la nuova classe. Per impostazione predefinita, il nome è basato sul nome specificato in **Nome classe**. Per salvare il file di implementazione nel percorso desiderato o aggiungere la definizione di classe in un file esistente, fare clic sul pulsante con i puntini di sospensione (**...** ). Se si specifica un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se la definizione di classe deve essere aggiunta al contenuto del file. Per aggiungere la definizione, fare clic su **Sì**; per tornare alla procedura guidata e specificare un altro nome di file, fare clic su **No**.  
  
 **Classe base**  
 Imposta la classe base per la nuova classe.  
  
 **Accesso**  
 Imposta l'accesso ai membri della classe base per la nuova classe. I modificatori di accesso sono parole chiave che specificano il livello di accesso di altre classi alle funzioni membro della classe. Per altre informazioni sulla specifica dell'accesso, vedere [Controllo di accesso dei membri](../cpp/member-access-control-cpp.md). Per impostazione predefinita, il livello di accesso della classe è impostato su `public`.  
  
-   `public`  
  
-   `protected`  
  
-   `private`  
  
-   **Predefinito** (Non viene generato alcun modificatore di accesso).  
  
 **Distruttore virtuale**  
 Specifica se il distruttore della classe è virtuale. L'uso di un distruttore virtuale consente di garantire che venga chiamato il distruttore corretto quando si eliminano le istanze delle classi derivate.  
  
 **Inline**  
 Genera il costruttore della classe e la definizione della classe come funzioni inline nel file di intestazione.  
  
 **Gestito**  
 Se selezionata, aggiunge una classe gestita e il file di intestazione. Se non è selezionata, aggiunge una classe nativa e il file di intestazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di una classe C++ generica](../ide/adding-a-generic-cpp-class.md)