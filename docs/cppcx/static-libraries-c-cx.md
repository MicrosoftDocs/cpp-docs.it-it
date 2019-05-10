---
title: Librerie statiche (C++/CX)
ms.date: 02/03/2017
ms.assetid: 7faf53c8-fa21-42cc-8246-d32533ef9dfa
ms.openlocfilehash: 188ba06518bf6cdd154b7d6bd61216ed1e4ffad3
ms.sourcegitcommit: 18d3b1e9cdb4fc3a76f7a650c31994bdbd2bde64
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/29/2019
ms.locfileid: "64877252"
---
# <a name="static-libraries-ccx"></a>Librerie statiche (C++/CX)

Una libreria statica che viene usata in un'app Universal Windows Platform (UWP) può contenere codice C++ conforme allo standard ISO, inclusi i tipi STL, nonché le chiamate alle API Win32 che non sono escluse dalla piattaforma di app di Windows Runtime. Una libreria statica utilizza i componenti Windows Runtime e può creare i componenti Windows Runtime con determinate restrizioni.

## <a name="creating-static-libraries"></a>Creazione di librerie statiche


Le istruzioni per la creazione di un nuovo progetto variano a seconda di quale versione di Visual Studio installata. Assicurarsi di avere il selettore di versione nell'angolo superiore sinistro impostata per la versione corretta.

::: moniker range="vs-2019"

### <a name="to-create-a-uwp-static-library-in-visual-studio-2019"></a>Per creare una libreria statica di UWP in Visual Studio 2019

1. Nella barra dei menu, scegliere **File** > **New** > **progetto** per aprire la **crea un nuovo progetto** nella finestra di dialogo.

1. Nella parte superiore della finestra di dialogo, impostare **Language** al **C++**, impostare **Platform** al **Windows**e impostare **tipodiprogetto** al **UWP**. 

1. Nell'elenco filtrato dei tipi di progetto, scegliere **libreria statica (Windows universale - C++/CX)** quindi scegliere **successiva**. Nella pagina successiva, assegnare un nome al progetto e specificare il percorso del progetto se si desidera.

1. Scegliere il **Create** pulsante per creare il progetto.

::: moniker-end

::: moniker range="<=vs-2017"

### <a name="to-create-a-uwp-static-library-in-visual-studio-2017-or-visual-studio-2015"></a>Per creare una libreria statica di UWP in Visual Studio 2017 o Visual Studio 2015

1. Nella barra dei menu scegliere **File** > **Nuovo** > **Progetto**. Sotto **Visual C++** > **Windows Universal** sceglie **libreria statica (Windows universale)**.

1. In **Esplora soluzioni**aprire il menu di scelta rapida per il progetto e scegliere **Proprietà**. Nel **delle proprietà** finestra di dialogo il **le proprietà di configurazione** > **C/C++** impostare **utilizzano Windows Runtime estensione** al **Sì (/ZW)**.

::: moniker-end

Quando si compila una nuova raccolta statica, se si effettua una chiamata a un'API Win32 esclusa per le app UWP, il compilatore genererà l'errore C3861, "Identificatore non trovato". Per cercare un metodo alternativo supportato per il Runtime di Windows, vedere [alternative alle API di Windows nelle App UWP](/uwp/win32-and-com/alternatives-to-windows-apis-uwp).

Se si aggiunge un progetto di libreria statica C++ a una soluzione di app UWP, è necessario aggiornare le impostazioni delle proprietà del progetto di libreria in modo che la proprietà di supporto UWP è impostata su **Sì**. Senza questa impostazione, compila il codice e collegamenti, ma un errore si verifica quando si tenta di verificare l'app per i Microsoft Store. La libreria statica deve essere compilata con le stesse impostazioni del compilatore del progetto che la utilizza.

Se utilizzi una libreria statica che crea classi `ref` pubbliche, classi di interfaccia pubbliche o classi di valore pubbliche, verrà generato il seguente avviso da parte del linker:

> **Warning LNK4264:** archiviazione del file oggetto compilato con /ZW in una libreria statica; si noti che quando si creano tipi Windows Runtime non è consigliabile eseguire il collegamento con una libreria statica che contiene i metadati di Windows Runtime.

È possibile ignorare l'avviso solo se la libreria statica non sta generando componenti Windows Runtime che vengono usati all'esterno della libreria stessa. Se la libreria non utilizza un componente da essa definito, il linker può ottimizzare l'implementazione anche se i metadati pubblici contengono informazioni sul tipo. Ciò significa che i componenti pubblici in una libreria statica verranno compilati ma non attivati in fase di esecuzione. Per questo motivo, qualsiasi componente Windows Runtime che è destinato all'utilizzo da altri componenti o l'app deve essere implementata in una libreria di collegamento dinamico (DLL).

## <a name="see-also"></a>Vedere anche

[Threading e marshalling](../cppcx/threading-and-marshaling-c-cx.md)
