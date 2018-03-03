---
title: Creazione guidata classe C++ generica | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.codewiz.class.generic
dev_langs:
- C++
helpviewer_keywords:
- Generic C++ Class Wizard [C++]
ms.assetid: aa95be9e-fc1b-45db-a11d-0d32c4929077
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 82d706c30c729f490f6bfdec3344d5dab537a689
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="generic-c-class-wizard"></a>Creazione guidata classe C++ generica
Aggiunge una classe C++ generica a un progetto. La classe non eredita da ATL o MFC.  
  
 **Nome della classe**  
 Imposta il nome della nuova classe.  
  
 **file con estensione h**  
 Imposta il nome del file di intestazione per la nuova classe. Per impostazione predefinita, questo nome è in base al nome fornito in **nome classe**. Per salvare il file di intestazione nel percorso prescelto o per aggiungere la dichiarazione di classe in un file esistente, fare clic sul pulsante con puntini di sospensione (**...** ). Se si specifica un file esistente, quando si sceglie **fine**, la procedura guidata viene richiesto di specificare se la dichiarazione di classe deve essere aggiunti al contenuto del file. Per aggiungere la dichiarazione, fare clic su **Sì**; per tornare alla procedura guidata e specificare un altro nome di file, fare clic su **n**.  
  
 **file con estensione cpp**  
 Imposta il nome del file di implementazione per la nuova classe. Per impostazione predefinita, questo nome è in base al nome fornito in **nome classe**. Per salvare il file di implementazione per il percorso desiderato o per aggiungere la definizione della classe a un file esistente, fare clic sul pulsante con puntini di sospensione (**...** ). Se si specifica un file esistente, quando si sceglie **fine**, la procedura guidata viene richiesto di specificare se la definizione di classe deve essere aggiunti al contenuto del file. Per aggiungere la definizione, fare clic su **Sì**; per tornare alla procedura guidata e specificare un altro nome di file, fare clic su **n**.  
  
 **Classe di base**  
 Imposta la classe base per la nuova classe.  
  
 **Accesso**  
 Imposta l'accesso ai membri della classe base per la nuova classe. Modificatori di accesso sono parole chiave che specificano il livello di accesso di altre classi di funzioni membro della classe. Per ulteriori informazioni su come specificare l'accesso, vedere [sul controllo dell'accesso](../cpp/member-access-control-cpp.md). Per impostazione predefinita, il livello di accesso di classe è impostato su `public`.  
  
-   `public`  
  
-   `protected`  
  
-   `private`  
  
-   **Predefinito** (non viene generato alcun modificatore di accesso.)  
  
 **Distruttore virtuale**  
 Specifica se il distruttore della classe è virtuale. Utilizzo di un distruttore virtuale consente di garantire che venga chiamato il distruttore corretto quando si eliminano le istanze delle classi derivate.  
  
 **Inline**  
 Genera il costruttore della classe e la definizione della classe come funzioni inline nel file di intestazione.  
  
 **Gestito**  
 Se selezionata, aggiunge un file di intestazione e di classe gestito. Se deselezionata, aggiunge un file di classe e intestazione nativo.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di una classe C++ generica](../ide/adding-a-generic-cpp-class.md)