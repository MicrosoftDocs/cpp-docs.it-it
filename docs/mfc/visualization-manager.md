---
title: Gestione visualizzazione
ms.date: 11/19/2018
helpviewer_keywords:
- Visualization Manager
ms.assetid: c9dd1365-27ac-42e5-8caa-1004525b4129
ms.openlocfilehash: 9c9dc19266d80d56f696953c5f5896eb9d99cc8b
ms.sourcegitcommit: 9e891eb17b73d98f9086d9d4bfe9ca50415d9a37
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2018
ms.locfileid: "52175574"
---
# <a name="visualization-manager"></a>Gestione visualizzazione

Il gestore visualizzazione è un oggetto che controlla l'aspetto di un'intera applicazione. Agisce come una singola classe in cui è possibile inserire tutto il codice di disegno per l'applicazione. La libreria MFC include diversi gestori visualizzazione. È anche possibile creare il proprio gestore visualizzazione se si desidera creare una visualizzazione personalizzata per l'applicazione. Le immagini seguenti mostrano la stessa applicazione quando sono abilitati diversi gestori visualizzazione:

![Rendering mediante CMFCVisualManagerWindows di MyApp](../mfc/media/vmwindows.png "MyApp rendering mediante CMFCVisualManagerWindows") <br/>
MyApp che utilizza il gestore visualizzazione CMFCVisualManagerWindows

![Rendering mediante CMFCVisualManagerVS2005 di MyApp](../mfc/media/vmvs2005.png "MyApp rendering mediante CMFCVisualManagerVS2005") <br/>
MyApp che utilizza il gestore visualizzazione CMFCVisualManagerVS2005

![Rendering mediante CMFCVisualManagerOfficeXP di MyApp](../mfc/media/vmofficexp.png "MyApp rendering mediante CMFCVisualManagerOfficeXP") <br/>
MyApp che utilizza il gestore visualizzazione CMFCVisualManagerOfficeXP

![Rendering mediante CMFCVisualManagerOffice2003 di MyApp](../mfc/media/vmoffice2003.png "MyApp rendering mediante CMFCVisualManagerOffice2003") <br/>
MyApp che utilizza il gestore visualizzazione CMFCVisualManagerOffice2003

![Rendering mediante CMFCVisualManagerOffice2007 di MyApp](../mfc/media/msoffice2007.png "MyApp rendering mediante CMFCVisualManagerOffice2007") <br/>
MyApp che utilizza il gestore visualizzazione CMFCVisualManagerOffice2007

Per impostazione predefinita, il gestore visivo mantiene il codice di disegno per diversi elementi di interfaccia utente grafica. Per fornire elementi dell'interfaccia utente personalizzati, è necessario eseguire l'override di metodi di disegno correlati il gestore visualizzazione. Per l'elenco di questi metodi, vedere [classe CMFCVisualManager](../mfc/reference/cmfcvisualmanager-class.md). I metodi che è possibile eseguire l'override per fornire un aspetto personalizzato sono tutti i metodi che iniziano con `OnDraw`.

L'applicazione può avere un solo `CMFCVisualManager` oggetto. Per ottenere un puntatore per il gestore visivo per l'applicazione, chiamare la funzione statica [CMFCVisualManager::GetInstance](../mfc/reference/cmfcvisualmanager-class.md#getinstance). Poiché tutti i gestori visualizzazione ereditano `CMFCVisualManager`, il `CMFCVisualManager::GetInstance` metodo otterrà un puntatore per il gestore visualizzazione appropriato, anche se si crea un gestore visualizzazione personalizzato.

Se si desidera creare un gestore visualizzazione personalizzato, è necessario derivare, da un gestore visualizzazione già esistente. La classe predefinita da cui derivare è `CMFCVisualManager`. Tuttavia, è possibile utilizzare un diverso gestore visualizzazione se meglio sarà simile al risultato desiderato per l'applicazione. Ad esempio, se si vuole usare il `CMFCVisualManagerOffice2007` gestore visualizzazione, ma si desidera solo modificare l'aspetto di separatori, è possibile derivare la classe personalizzata dalla `CMFCVisualManagerOffice2007`. In questo scenario, si devono sovrascrivere solo i metodi per disegnare i separatori.

Esistono due modi possibili per usare un gestore visualizzazione specifico per l'applicazione. È possibile chiamare il [CMFCVisualManager::SetDefaultManager](../mfc/reference/cmfcvisualmanager-class.md#setdefaultmanager) (metodo) e passare il gestore visualizzazione appropriato come parametro. Esempio di codice seguente viene illustrato come usare il `CMFCVisualManagerVS2005` gestore visualizzazione con questo metodo:

```cpp
CMFCVisualManager::SetDefaultManager (RUNTIME_CLASS (CMFCVisualManagerVS2005));
```

L'altro modo per usare un gestore visualizzazione nell'applicazione è crearlo manualmente. L'applicazione userà quindi questo nuovo gestore visualizzazione per il rendering. Tuttavia, poiché può esserci un solo `CMFCVisualManager` dell'oggetto per ogni applicazione, è necessario eliminare il gestore visualizzazione corrente prima di creare una nuova. Nell'esempio riportato di seguito `CMyVisualManager` è un gestore visualizzazione personalizzato che deriva da `CMFCVisualManager`. Il metodo seguente modifica il gestore visualizzazione utilizzato per visualizzare l'applicazione, a seconda di un indice:

```cpp
void CMyApp::SetSkin (int index)
{
    if (CMFCVisualManager::GetInstance() != NULL)
    {
        delete CMFCVisualManager::GetInstance();
    }

    switch (index)
    {
    case DEFAULT_STYLE:
        // The following statement creates a new CMFCVisualManager
        CMFCVisualManager::GetInstance();
        break;

    case CUSTOM_STYLE:
        new CMyVisualManager;
        break;

    default:
        CMFCVisualManager::GetInstance();
        break;
    }

    CMFCVisualManager::GetInstance()->RedrawAll();
}
```

## <a name="see-also"></a>Vedere anche

[Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)<br/>
[Classe CMFCVisualManager](../mfc/reference/cmfcvisualmanager-class.md)
