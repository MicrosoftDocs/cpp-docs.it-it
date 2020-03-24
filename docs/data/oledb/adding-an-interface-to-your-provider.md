---
title: Aggiunta di un'interfaccia al provider
ms.date: 05/09/2019
helpviewer_keywords:
- OLE DB provider templates, object interfaces
ms.assetid: b0fc7cf8-428a-4584-9d64-ce9074d0eb66
ms.openlocfilehash: b13d1224388dc7d3218dea1c70b5aa8a595fcbdb
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212331"
---
# <a name="adding-an-interface-to-your-provider"></a>Aggiunta di un'interfaccia al provider

> [!NOTE]
> La Creazione guidata provider OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive.

Determinare l'oggetto cui si vuole aggiungere l'interfaccia (in genere gli oggetti origine dati, set di righe, comando o sessione creati dalla **Creazione guidata provider OLE DB**). È possibile che l'oggetto cui è necessario aggiungere l'interfaccia sia uno non supportato dal provider. In questo caso, eseguire la **Creazione guidata provider OLE DB ATL** per creare l'oggetto. Fare clic con il pulsante destro del mouse sul progetto in **Visualizzazione classi**, scegliere **Aggiungi** > **Nuovo elemento** dal menu, selezionare **Installati** > **Visual C++**  > **ATL** e quindi fare clic su **Provider OLE DB ATL**. Può essere necessario inserire il codice dell'interfaccia in una directory separata e quindi copiare i file nel progetto del provider.

Se è stata creata una nuova classe per supportare l'interfaccia, fare in modo che l'oggetto erediti da questa classe. Ad esempio, è possibile aggiungere la classe `IRowsetIndexImpl` a un oggetto set di righe:

```cpp
template <class Creator>
class CCustomRowset :
    public CRowsetImpl< CCustomRowset<Creator>, CCustomWindowsFile, Creator>,
    public IRowsetIndexImpl< ... >
```

Aggiungere l'interfaccia a COM_MAP nell'oggetto usando la macro COM_INTERFACE_ENTRY. Se non è presente alcuna mappa, crearne una. Ad esempio:

```cpp
BEGIN_COM_MAP(CCustomRowset)
     COM_INTERFACE_ENTRY(IRowsetIndex)
END_COM_MAP()
```

Per l'oggetto set di righe, concatenare la mappa dell'oggetto padre in modo che l'oggetto possa delegare alla classe padre. In questo esempio aggiungere la macro COM_INTERFACE_ENTRY_CHAIN alla mappa:

```cpp
BEGIN_COM_MAP(CCustomRowset)
     COM_INTERFACE_ENTRY(IRowsetIndex)
     COM_INTERFACE_ENTRY_CHAIN(CRowsetImpl)
END_COM_MAP()
```

## <a name="see-also"></a>Vedere anche

[Uso dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)
