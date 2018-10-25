---
title: L'archiviazione delle stringhe nel Provider OLE DB | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- user records, editing
ms.assetid: 36cb9635-067c-4cad-8f85-962f28026f6a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 75f845027e5c629fe61b8cca6ab3f23306aa57bf
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50053227"
---
# <a name="storing-strings-in-the-ole-db-provider"></a>Memorizzazione di stringhe in un provider OLE DB

In CustomRS.h, la creazione guidata Provider OLE DB ATL, viene creato un record utente predefinita denominato `CWindowsFile`. Per gestire le due stringhe, modificare `CWindowsFile` o aggiungere un record utente personalizzato, come illustrato nel codice seguente:

```cpp
////////////////////////////////////////////////////////////////////////
class CAgentMan:
   public WIN32_FIND_DATA
   DWORD dwBookmark;              // Add this
   TCHAR szCommand[256];          // Add this
   TCHAR szText[256];             // Add this
   TCHAR szCommand2[256];         // Add this
   TCHAR szText2[256];            // Add this

{
public:
BEGIN_PROVIDER_COLUMN_MAP()
   PROVIDER_COLUMN_ENTRY_STR(OLESTR("Command"), 1, 256, GUID_NULL, CAgentMan, szCommand)
   PROVIDER_COLUMN_ENTRY_STR(OLESTR("Text"), 2, 256, GUID_NULL, CAgentMan, szText)
   PROVIDER_COLUMN_ENTRY_STR(OLESTR("Command2"), 3, 256, GUID_NULL, CAgentMan, szCommand2)
   PROVIDER_COLUMN_ENTRY_STR(OLESTR("Text2"),4, 256, GUID_NULL, CAgentMan, szText2)
END_PROVIDER_COLUMN_MAP()
   bool operator==(const CAgentMan& am) // This is optional
   {
      return (lstrcmpi(cFileName, wf.cFileName) == 0);
   }
};
```

I membri dei dati `szCommand` e `szText` rappresentano le due stringhe, con `szCommand2` e `szText2` forniscono le colonne aggiuntive, se necessario. Il membro dati `dwBookmark` non è necessaria per questo provider semplice in sola lettura, ma viene usato in un secondo momento per aggiungere un' `IRowsetLocate` dell'interfaccia, vedere [miglioramento di un Provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md). Il `==` operatore confronta istanze (implementazione di questo operatore è facoltativo).

Quando questa operazione viene eseguita, il provider deve essere pronto per compilare ed eseguire. Per testare il provider, è necessario un consumer con funzionalità di corrispondenza. [Implementazione di un Consumer semplice](../../data/oledb/implementing-a-simple-consumer.md) viene illustrato come creare un consumer di test. Eseguire il consumer di test con il provider. Verificare che il consumer di test consente di recuperare le stringhe corrette dal provider quando si fa clic il **eseguiti** pulsante nel **Test Consumer** nella finestra di dialogo.

Quando si è verificato il corretto funzionamento del provider, si potrebbe voler migliorare la funzionalità mediante l'implementazione di interfacce aggiuntive. Un esempio è illustrato nella [miglioramento di un Provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md).

## <a name="see-also"></a>Vedere anche

[Implementazione di un provider semplice in sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md)