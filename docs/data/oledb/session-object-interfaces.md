---
description: 'Altre informazioni su: interfacce di oggetti sessione'
title: Interfacce per oggetti Session
ms.date: 11/19/2018
helpviewer_keywords:
- session objects [OLE DB]
- session objects [OLE DB], interfaces
- OLE DB provider templates, object interfaces
- interfaces, session object
- interfaces, list of
ms.assetid: ac01a958-6dde-4bd7-8b63-94459e488335
ms.openlocfilehash: dc4f5644258b0ced4c97a5cda6de1b69abb8c2f1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97286579"
---
# <a name="session-object-interfaces"></a>Interfacce per oggetti Session

Nella tabella seguente vengono illustrate le interfacce obbligatorie e facoltative definite da OLE DB per un oggetto Session.

|Interfaccia|Necessaria?|Implementato da modelli di OLE DB?|
|---------------|---------------|--------------------------------------|
|[IGetDataSource](/previous-versions/windows/desktop/ms709721(v=vs.85))|Obbligatorio|Sì|
|[IOpenRowset](/previous-versions/windows/desktop/ms716946(v=vs.85))|Obbligatorio|Sì|
|[ISessionProperties](/previous-versions/windows/desktop/ms713721(v=vs.85))|Obbligatorio|Sì|
|[IAlterIndex](/previous-versions/windows/desktop/ms714943(v=vs.85))|Facoltativo|No|
|[IAlterTable](/previous-versions/windows/desktop/ms719764(v=vs.85))|Facoltativo|No|
|[IBindResource](/previous-versions/windows/desktop/ms714936(v=vs.85))|Facoltativo|No|
|[ICreateRow](/previous-versions/windows/desktop/ms716832(v=vs.85))|Facoltativo|No|
|[IDBCreateCommand](/previous-versions/windows/desktop/ms711625(v=vs.85))|Facoltativo|Sì|
|[IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85))|Facoltativo|Sì|
|[IIndexDefinition](/previous-versions/windows/desktop/ms711593(v=vs.85))|Facoltativo|No|
|[ISupportErrorInfo](/previous-versions/windows/desktop/ms715816(v=vs.85))|Facoltativo|Sì|
|[ITableCreation](/previous-versions/windows/desktop/ms713639(v=vs.85))|Facoltativo|No|
|[ITableDefinition](/previous-versions/windows/desktop/ms714277(v=vs.85))|Facoltativo|No|
|[ITableDefinitionWithConstraints](/previous-versions/windows/desktop/ms720947(v=vs.85))|Facoltativo|No|
|[ITransaction](/previous-versions/windows/desktop/ms723053(v=vs.85))|Facoltativo|No|
|[ITransactionJoin](/previous-versions/windows/desktop/ms718071(v=vs.85))|Facoltativo|No|
|[ITransactionLocal](/previous-versions/windows/desktop/ms714893(v=vs.85))|Facoltativo|No|
|[ITransactionObject](/previous-versions/windows/desktop/ms713659(v=vs.85))|Facoltativo|No|

L'oggetto Session crea un oggetto set di righe. Se il provider supporta i comandi, la sessione crea anche un oggetto comando ( `CCommand` , che implementa l'OLE DB `TCommand` ). L'oggetto Command implementa l' `ICommand` interfaccia e usa il `ICommand::Execute` metodo per eseguire i comandi nel set di righe, come illustrato nella figura seguente.

![Diagramma concettuale del provider](../../data/oledb/media/vc4u551.gif "Diagramma concettuale del provider")

## <a name="see-also"></a>Vedi anche

[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
