---
title: Librerie statiche (C++/CX)
ms.date: 02/03/2017
ms.assetid: 7faf53c8-fa21-42cc-8246-d32533ef9dfa
ms.openlocfilehash: 42c247650f778dcc9dbfa13d27cbb0244c0ebbc2
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80077973"
---
# <a name="static-libraries-ccx"></a>Librerie statiche (C++/CX)

Una libreria statica usata in un'app piattaforma UWP (Universal Windows Platform) (UWP) può contenere codice standard C++ ISO, inclusi i tipi STL, e anche chiamate a API Win32 che non sono escluse dalla piattaforma dell'app Windows Runtime. Una libreria statica usa componenti Windows Runtime e può creare componenti Windows Runtime con determinate restrizioni.

## <a name="creating-static-libraries"></a>Creazione di librerie statiche

Le istruzioni per la creazione di un nuovo progetto variano a seconda della versione di Visual Studio installata. Verificare che il selettore di versione in alto a sinistra sia impostato sulla versione corretta.

::: moniker range="vs-2019"

### <a name="to-create-a-uwp-static-library-in-visual-studio-2019"></a>Per creare una libreria statica UWP in Visual Studio 2019

1. Nella barra dei menu scegliere **File** > **nuovo** **progetto** > per aprire la finestra di dialogo **Crea un nuovo progetto** .

1. Nella parte superiore della finestra di dialogo impostare **lingua** su **C++** , imposta **piattaforma** su **Windows**e imposta **tipo di progetto** su **UWP**.

1. Dall'elenco filtrato dei tipi di progetto scegliere **libreria statica (Windows universale- C++/CX)** e quindi fare clic su **Avanti**. Nella pagina successiva assegnare un nome al progetto e specificare il percorso del progetto, se necessario.

1. Scegliere il pulsante **Crea** per creare il progetto.

::: moniker-end

::: moniker range="<=vs-2017"

### <a name="to-create-a-uwp-static-library-in-visual-studio-2017-or-visual-studio-2015"></a>Per creare una libreria statica UWP in Visual Studio 2017 o Visual Studio 2015

1. Nella barra dei menu scegliere **File** > **Nuovo** > **Progetto**. In **Visual C++**  > **universale Windows** scegliere **libreria statica (Windows universale)** .

1. In **Esplora soluzioni**aprire il menu di scelta rapida per il progetto e scegliere **Proprietà**. Nella finestra di dialogo **Proprietà** , in **proprietà di configurazione** > **C/C++**  pagina, impostare **utilizza Windows Runtime estensione** su **Sì (/ZW)** .

::: moniker-end

Quando si compila una nuova libreria statica, se si effettua una chiamata a un'API Win32 che viene esclusa per le app UWP, il compilatore genererà l'errore C3861 "identificatore non trovato". Per cercare un metodo alternativo supportato per la Windows Runtime, vedere [alternative alle API Windows nelle app UWP](/uwp/win32-and-com/alternatives-to-windows-apis-uwp).

Se si aggiunge un C++ progetto di libreria statica a una soluzione di app UWP, potrebbe essere necessario aggiornare le impostazioni delle proprietà del progetto della libreria in modo che la proprietà di supporto UWP sia impostata su **Sì**. Senza questa impostazione, il codice compila i collegamenti, ma si verifica un errore quando si tenta di verificare l'app per la Microsoft Store. La libreria statica deve essere compilata con le stesse impostazioni del compilatore del progetto che la utilizza.

Se utilizzi una libreria statica che crea classi `ref` pubbliche, classi di interfaccia pubbliche o classi di valore pubbliche, verrà generato il seguente avviso da parte del linker:

> **avviso LNK4264:** archiviazione del file oggetto compilato con/ZW in una libreria statica; Si noti che durante la creazione di tipi di Windows Runtime non è consigliabile eseguire il collegamento a una libreria statica che contiene Windows Runtime metadati.

È possibile ignorare l'avviso solo se la libreria statica non sta producendo Windows Runtime componenti utilizzati all'esterno della libreria stessa. Se la libreria non utilizza un componente da essa definito, il linker può ottimizzare l'implementazione anche se i metadati pubblici contengono informazioni sul tipo. Ciò significa che i componenti pubblici in una libreria statica verranno compilati ma non attivati in fase di esecuzione. Per questo motivo, qualsiasi componente Windows Runtime destinato all'utilizzo da parte di altri componenti o app deve essere implementato in una libreria a collegamento dinamico (DLL).

## <a name="see-also"></a>Vedere anche

[Threading e marshalling](../cppcx/threading-and-marshaling-c-cx.md)
