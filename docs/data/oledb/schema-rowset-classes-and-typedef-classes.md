---
title: Classi Rowset dello schema e classi Typedef | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- vc.templates.ole
dev_langs:
- C++
helpviewer_keywords:
- schema rowsets, classes
ms.assetid: 4bd881b3-26ca-4bdb-9226-d67560864f29
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 62b2f787f2ba70c847d51cbee5b46c26719b9fc2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33111445"
---
# <a name="schema-rowset-classes-and-typedef-classes"></a>Classi Rowset dello schema e classi Typedef
Uno schema è una raccolta di oggetti di database che sono di proprietà oppure sono stati creati da un utente specifico. Un catalogo può contenere uno o più schemi, ma deve sempre contenere un schema denominato INFORMATION_SCHEMA, che contiene le viste e i domini dello schema di informazioni. Informazioni sullo schema in OLE DB vengono recuperate utilizzando i set di righe dello schema predefiniti e includono tipi, tabelle, colonne, indici, viste, asserzioni e vincoli, le statistiche, set di caratteri, le regole di confronto e domini.  
  
 Set di righe dello schema sono set di righe predefinito che rappresenta i metadati. Set di righe dello schema vengono in genere utilizzate in programmazione dinamica, in cui la struttura del database non è noto in fase di compilazione. È possibile utilizzare questi set di righe dello schema per ottenere informazioni su un database in fase di esecuzione.  
  
 Utilizzare le classi typedef per creare un'istanza di righe dello schema. Il typedef corrispondente e classi rowset dello schema sono elencate di seguito. È necessario chiamare [CRestrictions:: Open](../../data/oledb/crestrictions-open.md) dopo aver creato un'istanza del set di righe dello schema. Questo metodo restituisce un set di risultati in base alle restrizioni specificate. Vedere [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) per informazioni sulle colonne di restrizione associata a ogni set di righe dello schema.  
  
 Nella tabella seguente consente di visualizzare ciascun Rowset dello Schema OLE DB e il corrispondente (classe typedef) i modelli OLE DB e classe info.  
  
|Set di righe dello Schema OLE DB|(Classe typedef)|Classe Info|  
|--------------------------|-------------------|----------------|  
|[ASSERZIONI](https://msdn.microsoft.com/en-us/library/ms719776.aspx)|[CAssertions](../../data/oledb/cassertions-cassertioninfo.md)|[CAssertionInfo](../../data/oledb/cassertions-cassertioninfo.md)|  
|[CATALOGHI](https://msdn.microsoft.com/en-us/library/ms721241.aspx)|[CCatalogs](../../data/oledb/ccatalogs-ccataloginfo.md)|[CCatalogInfo](../../data/oledb/ccatalogs-ccataloginfo.md)|  
|[CHARACTER_SETS](https://msdn.microsoft.com/en-us/library/ms722638.aspx)|[CCharacterSets](../../data/oledb/ccharactersets-ccharactersetinfo.md)|[CCharacterSetInfo](../../data/oledb/ccharactersets-ccharactersetinfo.md)|  
|[REGOLE DI CONFRONTO](https://msdn.microsoft.com/en-us/library/ms715783.aspx)|[CCollations](../../data/oledb/ccollations-ccollationinfo.md)|[CCollationInfo](../../data/oledb/ccollations-ccollationinfo.md)|  
|[COLUMN_PRIVILEGES](https://msdn.microsoft.com/en-us/library/ms715800.aspx)|[CColumnPrivileges](../../data/oledb/ccolumnprivileges-ccolumnprivilegeinfo.md)|[CColumnPrivilegeInfo](../../data/oledb/ccolumnprivileges-ccolumnprivilegeinfo.md)|  
|[COLONNE](https://msdn.microsoft.com/en-us/library/ms723052.aspx)|[CColumns](../../data/oledb/ccolumns-ccolumnsinfo.md)|[CColumnsInfo](../../data/oledb/ccolumns-ccolumnsinfo.md)|  
|[CONSTRAINT_COLUMN_USAGE](https://msdn.microsoft.com/en-us/library/ms724522.aspx)|[CConstraintColumnUsage](../../data/oledb/cconstraintcolumnusage-cconstraintcolumnusageinfo.md)|[CConstraintColumnUsageInfo](../../data/oledb/cconstraintcolumnusage-cconstraintcolumnusageinfo.md)|  
|[CONSTRAINT_TABLE_USAGE](https://msdn.microsoft.com/en-us/library/ms713710.aspx)|[CConstraintTableUsage](../../data/oledb/cconstrainttableusage-cconstrainttableusageinfo.md)|[CConstraintTableUsageInfo](../../data/oledb/cconstrainttableusage-cconstrainttableusageinfo.md)|  
|[CHECK_CONSTRAINTS](https://msdn.microsoft.com/en-us/library/ms712845.aspx)|[CCheckConstraints](../../data/oledb/ccheckconstraints-ccheckconstraintinfo.md)|[CCheckConstraintInfo](../../data/oledb/ccheckconstraints-ccheckconstraintinfo.md)|  
|[COLUMN_DOMAIN_USAGE](https://msdn.microsoft.com/en-us/library/ms711240.aspx)|[CColumnDomainUsage](../../data/oledb/ccolumndomainusage-ccolumndomainusageinfo.md)|[CColumnDomainUsageInfo](../../data/oledb/ccolumndomainusage-ccolumndomainusageinfo.md)|  
|[ESEGUE](https://msdn.microsoft.com/en-us/library/ms711276.aspx)|[CForeignKeys](../../data/oledb/cforeignkeys-cforeignkeysinfo.md)|[CForeignKeysInfo](../../data/oledb/cforeignkeys-cforeignkeysinfo.md)|  
|[INDICI](https://msdn.microsoft.com/en-us/library/ms709712.aspx)|[CIndexes](../../data/oledb/cindexes-cindexinfo.md)|[CIndexInfo](../../data/oledb/cindexes-cindexinfo.md)|  
|[KEY_COLUMN_USAGE](https://msdn.microsoft.com/en-us/library/ms712990.aspx)|[CKeyColumnUsage](../../data/oledb/ckeycolumns-ckeycolumninfo.md)|[CKeyColumnUsageInfo](../../data/oledb/ckeycolumns-ckeycolumninfo.md)|  
|[PRIMARY_KEYS](https://msdn.microsoft.com/en-us/library/ms714362.aspx)|[CPrimaryKeys](../../data/oledb/cprimarykeys-cprimarykeyinfo.md)|[CPrimaryKeyInfo](../../data/oledb/cprimarykeys-cprimarykeyinfo.md)|  
|[PROCEDURE](https://msdn.microsoft.com/en-us/library/ms724021.aspx)|[CProcedures](../../data/oledb/cprocedures-cprocedureinfo.md)|[CProcedureInfo](../../data/oledb/cprocedures-cprocedureinfo.md)|  
|[PROCEDURE_COLUMNS](https://msdn.microsoft.com/en-us/library/ms723092.aspx)|[CProcedureColumns](../../data/oledb/cprocedurecolumns-cprocedurecolumninfo.md)|[CProcedureColumnInfo](../../data/oledb/cprocedurecolumns-cprocedurecolumninfo.md)|  
|[PROCEDURE_PARAMETERS](https://msdn.microsoft.com/en-us/library/ms713623.aspx)|[CProcedureParameters](../../data/oledb/cprocedureparameters-cprocedureparaminfo.md)|[CProcedureParameterInfo](../../data/oledb/cprocedureparameters-cprocedureparaminfo.md)|  
|[PROVIDER_TYPES](https://msdn.microsoft.com/en-us/library/ms709785.aspx)|[CProviderTypes](../../data/oledb/cprovidertypes-cproviderinfo.md)|[CProviderInfo](../../data/oledb/cprovidertypes-cproviderinfo.md)|  
|[REFERENTIAL_CONSTRAINTS](https://msdn.microsoft.com/en-us/library/ms719737.aspx)|[CReferentialConstraints](../../data/oledb/creferentialconstraints-creferentialconstraintinfo.md)|[CReferentialConstraintInfo](../../data/oledb/creferentialconstraints-creferentialconstraintinfo.md)|  
|[SCHEMATA](https://msdn.microsoft.com/en-us/library/ms716887.aspx)|[CSchemata](../../data/oledb/cschemata-cschematainfo.md)|[CSchemataInfo](../../data/oledb/cschemata-cschematainfo.md)|  
|[SQL_LANGUAGES](https://msdn.microsoft.com/en-us/library/ms714374.aspx)|[CSQLLanguages](../../data/oledb/csqllanguages-csqllanguageinfo.md)|[CSQLLanguageInfo](../../data/oledb/csqllanguages-csqllanguageinfo.md)|  
|[STATISTICHE](https://msdn.microsoft.com/en-us/library/ms715957.aspx)|[CStatistics](../../data/oledb/cstatistics-cstatisticinfo.md)|[CStatisticInfo](../../data/oledb/cstatistics-cstatisticinfo.md)|  
|[TABLE_CONSTRAINTS](https://msdn.microsoft.com/en-us/library/ms715921.aspx)|[CTableConstraints](../../data/oledb/ctableconstraints-ctableconstraintinfo.md)|[CTableConstraintInfo](../../data/oledb/ctableconstraints-ctableconstraintinfo.md)|  
|[TABELLE](https://msdn.microsoft.com/en-us/library/ms716980.aspx)|[CTables](../../data/oledb/ctables-ctableinfo.md)|[CTableInfo](../../data/oledb/ctables-ctableinfo.md)|  
|[TABLE_PRIVILEGES](https://msdn.microsoft.com/en-us/library/ms725428.aspx)|[CTablePrivileges](../../data/oledb/ctableprivileges-ctableprivilegeinfo.md)|[CTablePrivilegeInfo](../../data/oledb/ctableprivileges-ctableprivilegeinfo.md)|  
|[TRADUZIONI](https://msdn.microsoft.com/en-us/library/ms725365.aspx)|[CTranslations](../../data/oledb/ctranslations-ctranslationinfo.md)|[CTranslationInfo](../../data/oledb/ctranslations-ctranslationinfo.md)|  
|[USAGE_PRIVILEGES](https://msdn.microsoft.com/en-us/library/ms722743.aspx)|[CUsagePrivileges](../../data/oledb/cusageprivileges-cusageprivilegeinfo.md)|[CUsagePrivilegeInfo](../../data/oledb/cusageprivileges-cusageprivilegeinfo.md)|  
|[VIEW_COLUMN_USAGE](https://msdn.microsoft.com/en-us/library/ms714896.aspx)|[CViewColumnUsage](../../data/oledb/cviewcolumnusage-cviewcolumninfo.md)|[CViewColumnInfo](../../data/oledb/cviewcolumnusage-cviewcolumninfo.md)|  
|[VISUALIZZAZIONI](https://msdn.microsoft.com/en-us/library/ms723122.aspx)|[CViews](../../data/oledb/cviews-cviewinfo.md)|[CViewInfo](../../data/oledb/cviews-cviewinfo.md)|  
|[VIEW_TABLE_USAGE](https://msdn.microsoft.com/en-us/library/ms719727.aspx)|[CViewTableUsage](../../data/oledb/cviewtableusage-cviewtableinfo.md)|[CViewTableInfo](../../data/oledb/cviewtableusage-cviewtableinfo.md)|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbsch. h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)