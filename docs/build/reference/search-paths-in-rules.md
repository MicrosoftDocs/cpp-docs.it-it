---
title: Percorsi di ricerca nelle regole
ms.date: 11/04/2016
helpviewer_keywords:
- search paths in NMAKE inference rules
- inference rules in NMAKE
- rules, inference
ms.assetid: 38feded6-536d-425d-bf40-fff3173a5506
ms.openlocfilehash: eab6e9d32940aaf5729ce82c4e8258a3a3132208
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62318862"
---
# <a name="search-paths-in-rules"></a>Percorsi di ricerca nelle regole

```
{frompath}.fromext{topath}.toext:
   commands
```

## <a name="remarks"></a>Note

Una regola di inferenza si applica a una dipendenza solo se i percorsi specificati nella dipendenza esattamente corrispondono i percorsi della regola di inferenza. Specificare la directory del dipendente nella *frompath* e la directory di destinazione nella *topath*; non sono consentiti spazi. Specificare un solo percorso per ogni estensione. Un percorso per un'estensione richiede un percorso in altro. Per specificare la directory corrente, usare un punto (.) o parentesi graffe vuote ({}). Le macro possono rappresentare *frompath* e *topath*; vengono richiamati durante la preelaborazione.

## <a name="example"></a>Esempio

### <a name="code"></a>Codice

```
{dbi\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $(YUDBI) $<

{ilstore\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $<

{misc\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $(YUPDB) $<

{misc\}.c{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $<

{msf\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $<

{bsc\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $(YUPDB) $<

{mre\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $(YUPDB) $<

{namesrvr\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $(YUPDB) $<

{src\cvr\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $<
```

## <a name="see-also"></a>Vedere anche

[Definizione di una regola](defining-a-rule.md)
