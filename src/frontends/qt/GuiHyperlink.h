// -*- C++ -*-
/**
 * \file GuiHyperlink.h
 * This file is part of LyX, the document processor.
 * Licence details can be found in the file COPYING.
 *
 * \author John Levon
 * \author Angus Leeming
 *
 * Full author contact details are available in file CREDITS.
 */

#ifndef GUIHYPERLINK_H
#define GUIHYPERLINK_H

#include "InsetParamsWidget.h"
#include "ui_HyperlinkUi.h"

namespace lyx {
namespace frontend {

class GuiHyperlink : public InsetParamsWidget, public Ui::HyperlinkUi
{
	Q_OBJECT

public:
	///
	GuiHyperlink(QWidget * parent = 0);

private:
	/// \name InsetParamsWidget inherited methods
	//@{
	InsetCode insetCode() const override { return HYPERLINK_CODE; }
	FuncCode creationCode() const override { return LFUN_INSET_INSERT; }
	QString dialogTitle() const override { return qt_("Hyperlink Settings"); }
	void paramsToDialog(Inset const *) override;
	docstring dialogToParams() const override;
	bool checkWidgets(bool readonly) const override;
	bool initialiseParams(std::string const & data) override;
	//@}
};

} // namespace frontend
} // namespace lyx

#endif // GUIHYPERLINK_H
