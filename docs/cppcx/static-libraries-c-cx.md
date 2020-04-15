---
title: Librerie statiche (C++/CX)
ms.date: 02/03/2017
ms.assetid: 7faf53c8-fa21-42cc-8246-d32533ef9dfa
ms.openlocfilehash: 3c4bfd28b805903a2e596ef6d648ff31b0b8261c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81358103"
---
# <a name="static-libraries-ccx"></a>Librerie statiche (C++/CX)

Una libreria statica che viene usata in un'app UWP (Universal Windows Platform) può contenere codice C , inclusi i tipi STL, e anche chiamate alle API Win32 che non sono escluse dalla piattaforma dell'app di Windows Runtime. Una libreria statica utilizza componenti di Windows Runtime e può creare componenti di Windows Runtime con determinate restrizioni.

## <a name="creating-static-libraries"></a>Creazione di librerie statiche

Le istruzioni per la creazione di un nuovo progetto variano a seconda della versione di Visual Studio installata. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo Selettore **versione.** Si trova nella parte superiore del sommario in questa pagina.

::: moniker range="vs-2019"

### <a name="to-create-a-uwp-static-library-in-visual-studio-2019"></a>Per creare una libreria statica UWP in Visual Studio 2019To create a UWP static library in Visual Studio 2019

1. Sulla barra dei menu scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Crea nuovo progetto**.

1. Nella parte superiore della finestra di dialogo, impostare **Lingua** su **C,** impostare **Piattaforma** su **Windows**e tipo di **progetto** **su UWP**.

1. Dall'elenco filtrato dei tipi di progetto, scegliere **Libreria statica (Windows universale - C,** quindi scegliere **Avanti).** Nella pagina successiva assegnare un nome al progetto e specificare la posizione del progetto, se lo si desidera.

1. Scegliere il pulsante **Crea** per creare il progetto.

::: moniker-end

::: moniker range="<=vs-2017"

### <a name="to-create-a-uwp-static-library-in-visual-studio-2017-or-visual-studio-2015"></a>Per creare una libreria statica UWP in Visual Studio 2017 o Visual Studio 2015To create a UWP static library in Visual Studio 2017 or Visual Studio 2015

1. Nella barra dei menu scegliere **File** > **Nuovo** > **progetto**. In **Visual Cè** > **Windows Universal** scegliere Libreria **statica (Windows universale)**.

1. In **Esplora soluzioni**aprire il menu di scelta rapida per il progetto, quindi scegliere **Proprietà**. Nella finestra di dialogo **Proprietà,** nella pagina **Proprietà** > di configurazione**C/C,** impostare **Consumo estensione di Windows Runtime** su Sì **(//W)**.

::: moniker-end

Quando si compila una nuova libreria statica, se si effettua una chiamata a un'API Win32 esclusa per le app UWP, il compilatore genererà l'errore C3861, "Identificatore non trovato". Per cercare un metodo alternativo supportato per Windows Runtime, vedi Alternative alle API di [Windows nelle app UWP.](/uwp/win32-and-com/alternatives-to-windows-apis-uwp)

Se si aggiunge un progetto di libreria statica di C' a una soluzione dell'app UWP, potrebbe essere necessario aggiornare le impostazioni delle proprietà del progetto di libreria in modo che la proprietà del supporto UWP sia impostata su **Sì**. Senza questa impostazione, il codice viene compilato e collegato, ma si verifica un errore quando si tenta di verificare l'app per Microsoft Store. La libreria statica deve essere compilata con le stesse impostazioni del compilatore del progetto che la utilizza.

Se utilizzi una libreria statica che crea classi `ref` pubbliche, classi di interfaccia pubbliche o classi di valore pubbliche, verrà generato il seguente avviso da parte del linker:

> **avviso LNK4264:** file oggetto di archiviazione compilato con //W in una libreria statica; Tieni presente che quando si creano tipi Windows Runtime non è consigliabile creare un collegamento a una libreria statica che contiene metadati di Windows Runtime.

Puoi tranquillamente ignorare l'avviso solo se la libreria statica non produce componenti di Windows Runtime utilizzati all'esterno della libreria stessa. Se la libreria non utilizza un componente da essa definito, il linker può ottimizzare l'implementazione anche se i metadati pubblici contengono informazioni sul tipo. Ciò significa che i componenti pubblici in una libreria statica verranno compilati ma non attivati in fase di esecuzione. Per questo motivo, qualsiasi componente di Windows Runtime destinato all'utilizzo da parte di altri componenti o app deve essere implementato in una libreria a collegamento dinamico (DLL).

## <a name="see-also"></a>Vedere anche

[Threading e marshalling](../cppcx/threading-and-marshaling-c-cx.md)
